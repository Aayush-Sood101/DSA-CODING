#include<iostream>
#include<vector>
#include<list>
#include<unordered_set>
using namespace std;

vector<list<int>> graph; // undirected unweighted graph
unordered_set<int> visited;
int v;

void add_edge(int src , int dest , bool bi_dir = true){
    graph[src].push_back(dest);
    if(bi_dir){
        graph[dest].push_back(src);
    }
}
bool dfs(int curr , int end){
    //base case
    if(curr == end) return true;

    visited.insert(curr);
    for(auto neighbour : graph[curr]){
        if(visited.find(neighbour) == visited.end()){ // not yet visited the vertex
            bool result = dfs(neighbour , end);
            if(result) return true;
        }
    }
    return false;
}

bool any_path(int src , int dest){
    return dfs(src , dest);
}

int main(){
    cin>>v;
    graph.resize(v , list<int> ());
    int e;
    cin>>e;
    while(e--){
        int s , d;
        cin>>s>>d;
        add_edge(s , d);
    }
    //input for code
    int x , y;
    cin>>x>>y;
    cout<<any_path(x , y)<<endl;
}