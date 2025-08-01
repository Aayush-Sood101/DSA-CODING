#include<bits/stdc++.h>
#define ll long long int
#define pii pair<int , int>
using namespace std;

int v; // number of vertces
vector<list<pii>> graph;
void addEdge(int src , int dest , int wt , bool bi_dir = true){
    graph[src].push_back({dest , wt});
    if(bi_dir){
        graph[dest].push_back({src , wt});
    }
}

unordered_map<int , int> dijikstra(int src , int n){
    priority_queue<pii , vector<pii> , greater<pii>> pq;
    unordered_set<int> visited;
    unordered_map<int , int> mp;
    vector<int> via(n);
    for(int i = 0 ; i<n ; i++){
        mp[i] = INT_MAX;
    }

    pq.push({0 , src});
    mp[src] = 0;
    while(pq.size() > 0){
        pii curr = pq.top();
        pq.pop();
        if(visited.find(curr.second) != visited.end()){
            continue;
        }

        visited.insert(curr.second);

        for(auto neighbour: graph[curr.second]){
            if(visited.find(neighbour.first) == visited.end() && mp[neighbour.first] > mp[curr.second] + neighbour.second){ // not yet visited
                pq.push({mp[curr.second] + neighbour.second , neighbour.first});
                via[neighbour.first] = curr.second;
                mp[neighbour.first] = mp[curr.second] + neighbour.second;
            }
        }
    }

    return mp;
}

int main(){
    int n , m;
    cin>>n>>m; // number of vertices and edges

    v = n;
    graph.resize(n , list<pii> ());
    while(m--){
        int u , v , wt;
        cin>>u>>v>>wt;
        addEdge(u , v , wt);
    }
    int src;
    cin>>src;

    unordered_map<int , int> mp = dijikstra(src , n);

    int dest;
    cin>>dest;
    cout<<mp[dest]<<endl;
}