#include<bits/stdc++.h>
#define ll long long int
using namespace std;

vector<int> dsu_rank;
vector<int> parent;

static bool cmp(vector<int> &a , vector<int> &b){
    return a[2] < b[2];
}

int find(int x){
    return parent[x] = (parent[x] == x) ? x : find(parent[x]);
}


bool Union(int a , int b){
    a = find(a);
    b = find(b);

    if(a == b){
        return false;
    }

    if(dsu_rank[a] <= dsu_rank[b]){
        dsu_rank[b]++;
        parent[a] = b;
    }
    else{
        dsu_rank[a]++;
        parent[b] = a;
    }

    return true;
}

int main(){
    int n , e;
    cin>>n>>e;

    dsu_rank.resize(n , 0);
    parent.resize(n);
    for(int i = 0 ; i<n ; i++)
    parent[i] = i;

    vector<vector<int>> edgeList;
    int ans = 0;
    for(int i = 0 ; i<e ; i++){
        int u , v , wt;
        cin>>u>>v>>wt;

        edgeList.push_back({u , v , wt});
    } 

    sort(edgeList.begin() , edgeList.end() , cmp);

    for(int i = 0 ; i<n ; i++){
        bool result = Union(edgeList[i][0] , edgeList[i][1]);
        if(result)
        ans += edgeList[i][2];
    }

    cout<<ans<<endl;
}