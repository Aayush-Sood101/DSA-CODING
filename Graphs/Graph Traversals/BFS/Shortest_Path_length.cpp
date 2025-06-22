//FIND THE SHORTEST PATH FROM A VERTEX TO ALL OTHER VERTICES
//T.C.: O(V + E)
//S.C.: O(V)
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

vector<int> dist;
unordered_set<int> visited;
void bfs(int src){
    dist.clear();
    dist.resize(v , INT_MAX);
    queue<int> q;
    dist[src] = 0;
    visited.insert(src);
    q.push(src);
    while(q.size() > 0){
        int curr = q.front();
        q.pop();

        for(auto neighbour: graph[curr]){
            if(visited.find(neighbour) == visited.end()){
                q.push(neighbour);
                visited.insert(neighbour);
                dist[neighbour] = dist[curr] + 1; 
            }
        }
    }

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

    bfs(0);
    for(auto ele : dist){
        cout<<ele<<" ";
    }
    cout<<endl;
}