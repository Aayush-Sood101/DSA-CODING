
void dfs(int node , unordered_set<int> &visited){
    visited.insert(node);
    for(auto neighbour : visited){
        if(visited.count(neighbour) == 0){
            dfs(neighbour , visited);
        }
    }
}

int connected_component(){
    int result = 0;
    unordered_set<int> visited;