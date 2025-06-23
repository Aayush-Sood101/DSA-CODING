// union by dsu_rank along with path compression
#include<bits/stdc++.h>
using namespace std;

vector<int> parent;
vector<int> dsu_rank;
int find(int x){ // this method returns which group/cluster x belongs to
        return parent[x] = (parent[x] == x) ? x : find(parent[x]);
}

void Union(int a , int b){
        a = find(a);
        b = find(b);

        if(a == b) return ; // already in the same group/c luster

        if(dsu_rank[a] >= dsu_rank[b]){
                dsu_rank[a]++;
                parent[b] = a;
        }
        else{
                dsu_rank[b]++;
                parent[a] = b;
        }
}

int main(){
        cout<<"Enter the number of elements: ";
        int n;
        cin>>n;
        parent.clear();
        dsu_rank.clear();
        parent.resize(n);
        dsu_rank.resize(n , 0);

        for(int i = 0 ; i<n ; i++){
                parent[i] = i;
        }

        cout<<"Enter the number of queries: "<<endl;
        int m;
        cin>>m;

        while(m--){
                string str;
                cin>>str;
                if(str == "Union"){
                        int a , b;
                        cin>>a>>b;
                        Union(a , b);
                }
                else{
                        int x;
                        cin>>x;
                        cout<<find(x)<<endl;
                }
        }
}