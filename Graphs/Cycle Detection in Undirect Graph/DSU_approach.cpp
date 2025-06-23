// DSU Construction by rank and path compression
#include<bits/stdc++.h>
using namespace std;

int find(vector<int> &parent , int x){
        //this function returen to which group/cluster x belongs to 

        return parent[x] = (parent[x] == x) ? x : find(parent , parent[x]);
}

bool Union(vector<int> &parent , vector<int> &rank , int a , int b){
        //this function performs the union of the two groups

        a = find(parent , a);
        b = find(parent , b);

        if(a == b){
                // both belong to the same group already
                return true;  // if belonging to the same group/cluster a cycle is already present
        }

        if(rank[a] >= rank[b]){
                rank[a]++;
                parent[b] = a;
        }
        else{
                rank[b]++;
                parent[a] = b;
        }

        return false;
}

int main(){
        //n is the no of elements and m is the number of queries
        int n , m;
        cin>>n>>m;

        vector<int> parent(n + 1);
        vector<int> rank(n + 1 , 1);
        for(int i = 0 ; i<=n ; i++){
                parent[i] = i;
        }

        while(m--){
                string str;
                cin>>str;
                if(str == "union"){
                        int a , b;
                        cin>>a>>b;
                        bool result = Union(parent , rank , a , b);
                        if(result){
                                cout<<"Cycle Detected"<<endl;
                                return 0;
                        }
                }
                else{
                        int x;
                        cin>>x;
                        cout<<find(parent , x)<<endl;
                }
        }

        cout<<"No Cycle Detected"<<endl;
}