//CALCULATE THE TOTAL NUMBER OF CONNECTED COMPONENTS IN A GIVEN GRAPH
//This can be done by calculating the number of times bfs/dfs can be started
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

unordered_set<int> visited;
void dfs(int curr){
        visited.insert(curr);
        for(auto neighbours: graph[curr]){
                if(visited.find(neighbours) == visited.end()){
                        dfs(neighbours);
                }
        }
}

int conectedComponent(){
        int result = 0;
        for(int i = 0 ; i<v ; i++){
                if(visited.find(i) == visited.end()){
                        result++;
                        dfs(i);
                }
        }

        return result;
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
    


    visited.clear();
    cout<<conectedComponent()<<endl;
}