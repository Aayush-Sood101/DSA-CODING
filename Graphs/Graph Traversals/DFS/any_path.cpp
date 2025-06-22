// GIVEN TWO VERTICES CHECK WHETEHER THERE EXISTS ANY PATH BETWEEN THEM
//T.C: O(V + E)
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

unordered_set<int> s;
bool dfs(int curr , int end){
    if(curr == end) return true;
    s.insert(curr); // mark visited
    for(auto neighbour: graph[curr]){
        if(s.find(neighbour) == s.end()){ // not in set yet
            bool result = dfs(neighbour , end);
            if(result)
            return true;
        }
    }

    return false;
}

bool anyPath(int src , int dest){
    return dfs(src , dest);
}




int main(){
    cout<<"Enter the number of vertices: ";
    cin>>v;
    graph.clear();
    s.clear();
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

    cout<<"Enter the src and dest nodes: ";
    int x , y;
    cin>>x>>y;
    cout<<anyPath(x , y)<<endl;
}