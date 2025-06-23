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

bool bfs(int src , vector<int> &parent , unordered_set<int> &visited){
        queue<int> q;
        q.push(src);
        visited.insert(src);

        while(q.size() > 0){
                int curr = q.front();
                q.pop();

                for(auto neighbour: graph[curr]){
                        // already visited and not parent node
                        if(visited.find(neighbour) != visited.end() && parent[curr] != neighbour){
                                // cycle detected
                                return true;
                        }
                        if(visited.find(neighbour) == visited.end()){
                                visited.insert(neighbour);
                                parent[neighbour] = curr;
                                q.push(neighbour);
                        }
                }
        }

        return false;
}

bool hasCycle(){
        // funciton required as there can by multiple connected compoents
        unordered_set<int> visited;
        vector<int> parent(v , -1); // initialise with -1 because parent of 0 node is none

        for(int i = 0 ; i<v ; i++){
                if(visited.find(i) == visited.end()){ // not yet visted
                        bool result = bfs(i , parent , visited);
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