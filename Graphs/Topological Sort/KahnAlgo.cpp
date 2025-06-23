#include<bits/stdc++.h>
using namespace std;

vector<list<int>> graph;
int v;

void addEdge(int src , int dest , bool bi_dir = true){
        graph[src].push_back(dest);
        if(bi_dir){
                graph[dest].push_back(src);
        }
}

void topological_sort(){
        vector<int> indegree(v , 0);
        for(int i = 0 ; i<v ; i++){
                for(auto neighbour: graph[i]){
                        indegree[neighbour]++;
                }
        }

        queue<int> q;
        unordered_set<int> visited;
        for(int i = 0 ; i<v ; i++){
                if(indegree[i] == 0){
                        q.push(i);
                        visited.insert(i);
                }
        }
        vector<int> ans;
        while(q.size() > 0){
                int curr = q.front();
                q.pop();

                ans.push_back(curr);

                for(auto neighbour: graph[curr]){
                        if(visited.find(neighbour) == visited.end()){
                                indegree[neighbour]--;
                                if(indegree[neighbour] == 0){
                                        q.push(neighbour);
                                        visited.insert(neighbour);
                                }
                        }
                }
        }

        if(ans.size() != v){
                cout<<"Cannot be resolved"<<endl;
                return ;
        }

        cout<<"Resolution order: ";
        for(auto ele : ans)
        cout<<ele<<" ";
        
        cout<<endl;
}

int main(){
        cout<<"Enter the number of vertices in the graph: ";
        cin>>v;
        graph.clear();
        graph.resize(v , list<int> ());
        cout<<"Enter edges in the form of (u , v)"<<endl;
        cout<<"Enter -1 to stop"<<endl;
        while(true){
                int src , dest;
                cin>>src;
                if(src == -1)
                break;
                cin>>dest;
                addEdge(src , dest , false);
        }

        topological_sort();
}