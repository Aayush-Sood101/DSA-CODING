#include<iostream>
#include<vector>
#include<list>
#include<queue>
#include<unordered_set>
#include<climits>
using namespace std;

vector<list<int>> graph; // undirected unweighted graph
unordered_set<int> visited;
vector<int> dist;
int v;

void add_edge(int src , int dest , bool bi_dir = true){
    graph[src].push_back(dest);
    if(bi_dir){
        graph[dest].push_back(src);
    }
}

void bfs(int src , vector<int> &dist){
    visited.clear();
    dist.resize(v , INT_MAX);
    dist[src] = 0;

    queue<int> q;
    visited.insert(src);
    q.push(src);
    while(q.size() > 0){
        int curr  = q.front();
        q.pop();
        for(auto neighbour : graph[curr]){
            if(!(visited.count(neighbour))){ // node not visited
                q.push(neighbour);
                visited.insert(neighbour);

                dist[neighbour] = dist[curr] + 1;
            }
        }
    }
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
    vector<int> dist;
    bfs(0 , dist);
    for(int i = 0 ; i<dist.size() ; i++){
        cout<<dist[i]<<" ";
    }
}