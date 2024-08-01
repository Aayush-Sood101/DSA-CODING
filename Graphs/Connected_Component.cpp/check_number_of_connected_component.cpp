#include<iostream>
#include<vector>
#include<list>
#include<unordered_set>
using namespace std;

vector<list<int>> graph;
int v; // number of vertices
void add_edge(int src , int dest , bool bi_dir = true){
    graph[src].push_back(dest);
    if(bi_dir){
        graph[dest].push_back(src);
    }
}

void dfs(int node , unordered_set<int> &visited){
    visited.insert(node);
    for(auto neighbour : graph[node]){
        if(visited.count(neighbour) == 0){
            dfs(neighbour , visited);
        }
    }
}

int connected_component(){
    int result = 0;
    unordered_set<int> visited;
    for(int i = 0 ; i<v ; i++){
        //go to every vertex
        //if we can start dfs we get a disconnected component
        if(visited.count(i) == 0)
        result++;
        dfs(i , visited);
    } 
    return result;
}

int main(){
    cout<<"Enter the number of vertices: ";
    cin>>v;
    graph.resize(v , list<int> ());
    int e; // Number of edges
    cout<<"Enter the number of edges: ";
    cin>>e;
    cout<<"Start entering source and destination for each edge: "<<endl;
    while(e--){
        int s , d; // source and destination
        cin>>s>>d;
        add_edge(s , d);
    }
    cout<<connected_component()<<endl;
}