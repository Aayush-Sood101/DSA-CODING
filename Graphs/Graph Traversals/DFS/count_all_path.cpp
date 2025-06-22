//COUNT THE NUMBER OF PATHS FROM SRC TO DESTINATION

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

void display(){
    for(auto v : result){
        for(auto ele: v){
            cout<<ele<<" ";
        }
        cout<<endl;
    }

    return ;
}

vector<int> path;
vector<vector<int>> result;
unordered_set<int> visited;


void dfs(int curr , int end){
    if(curr == end){
        path.push_back(curr);
        result.push_back(path);
        path.pop_back();
        return ;

    }

    visited.insert(curr);
    path.push_back(curr);
    for(auto neighbour: graph[curr]){
        if(visited.find(neighbour) == visited.end()){
            dfs(neighbour , end);
        }
    }
    visited.erase(curr);
    path.pop_back();
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

    dfs(0 , 5);
    display();

}