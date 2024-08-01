#include<iostream>
#include<vector>
#include<list>
#include<unordered_set>
using namespace std;

vector<list<int>> graph; // undirected unweighted graph
unordered_set<int> visited;
vector<vector<int>> result;
int v;

void add_edge(int src , int dest , bool bi_dir = true){
    graph[src].push_back(dest);
    if(bi_dir){
        graph[dest].push_back(src);
    }
}
void dfs(int curr , int end , vector<int> &path){
    //base case
    if(curr == end){
        path.push_back(curr);
        result.push_back(path);
        path.pop_back();
        return;
    }
    visited.insert(curr);
    path.push_back(curr);
    for(auto neighbour : graph[curr]){
        if(visited.find(neighbour) == visited.end()){ // not yet visited the vertex
            dfs(neighbour , end , path);
        }
    }
    path.pop_back();
    visited.erase(curr);
    return;
}

bool count_path(int src , int dest){
    vector<int> path;
    dfs(src , dest , path);
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
    count_path(x , y);
    cout<<result.size()<<endl;
}