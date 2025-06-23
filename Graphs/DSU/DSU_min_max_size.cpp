//union by rank along with path compression
#include<bits/stdc++.h>
using namespace std;

int find(vector<int> &parent  , int x){
        //this method return to what group/cluster x belongs to
        return (parent[x] == x) ? x :  find(parent , parent[x]);
}

void Union(vector<int> &parent , vector<int> &sz , vector<int> &minimal , vector<int> &maximal, vector<int> &rank , int a , int b){
        //this method performs the union the two groups
        a = find(parent , a);
        b = find(parent , b);

        if(a == b) return ; // they both have the same parent

        if(rank[a] >= rank[b]){
                rank[a]++;
                parent[b] = a;
                sz[a] += sz[b];
                maximal[a] = max(maximal[a] , maximal[b]);
                minimal[a] = min(minimal[a] , minimal[b]);
        }
        else{
                rank[b]++;
                parent[a] = b;
                sz[b] += sz[a];
                maximal[b] = max(maximal[a] , maximal[b]);
                minimal[b] = min(minimal[a] , minimal[b]);
        }
}

int main(){
        
        // Disable synchronization with C standard I/O
        std::ios_base::sync_with_stdio(false); 
        // Untie cin from cout, preventing automatic flushing of cout before cin reads
        std::cin.tie(NULL);
        
        
        // n for no of elements
        // m for queries

        int n , m;
        cin>>n>>m;
        vector<int> parent(n +  1);
        vector<int> rank(n + 1 , 1);
        vector<int> sz(n + 1 , 1);
        vector<int> minimal(n + 1);
        vector<int> maximal(n + 1);
        for(int i = 0 ; i<=n ; i++){
                parent[i] = minimal[i] = maximal[i] = i;
        }


        while(m--){
                string str;
                cin>>str;

                if(str == "union"){
                        int a , b;
                        cin>>a>>b;
                        Union(parent , sz , minimal , maximal , rank , a , b);
                }
                else{
                        int x;
                        cin>>x;
                        cout<<minimal[find(parent , x)]<<" "<<maximal[find(parent , x)]<<" "<<sz[find(parent , x)]<<"\n";
                }
        }
}