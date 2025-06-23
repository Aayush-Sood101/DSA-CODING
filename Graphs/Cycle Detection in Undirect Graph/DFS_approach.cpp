#include<bits/stdc++.h>
using namespace std;

int v; //no. of vertices
vector<list<int>> graph;
void addEdge(int src , int dest , bool bi_dir = true){
    graph[src].push_back(dest);
    if(bi_dir){
        graph[dest].push_back(src);
    }
}

bool dfs(int src , int parent , unordered_set<int> &visited){
        visited.insert(src);
        for(auto neighbour: graph[src]){
                if(visited.find(neighbour) != visited.end() && neighbour != parent){ // already visited and not a parent
                        return true;
                }
                if(visited.find(neighbour) == visited.end()){ // not yet visited
                        visited.insert(neighbour);
                        bool result = dfs(neighbour , src , visited);
                        if(result) return result;
                }
        }

        return false;
}

bool hasCycle(){

    //function required as there can be separate connected components

    unordered_set<int> visited;
    for(int i = 0 ; i<v ; i++){
        if(visited.find(i) == visited.end()){
            bool result = dfs(i , -1 , visited);
            if(result) return result;
        }
    }
    return false;
}

int main(){
    cout<<"Enter the number of vertices: ";
    cin>>v;

    graph.resize(v , list<int> ());
    cout<<"Enter the edges in the form of (src dest) "<<endl;
    cout<<"Enter (-1 -1) to stop"<<endl;
    while(true){
        int src, dest;
        cin>>src>>dest;
        if(src == -1)
        break;
        addEdge(src , dest);
    }

    cout<<hasCycle()<<endl;
}