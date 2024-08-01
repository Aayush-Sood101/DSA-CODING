#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

vector<unordered_map<int , int>> graph;
int v; // number of vertices
void add_edge(int src , int dest , int wt , bool bi_dir = true){
    graph[src][dest] = wt;
    if(bi_dir){
        graph[dest][src] = wt;
    }
}
void display(){
    for(int i = 0 ; i<graph.size() ; i++){
        cout<<i<<" -> ";
        for(auto ele : graph[i]){
            cout<<"("<<ele.first<<" , "<<ele.second<<")"<<" , ";
        }
        cout<<endl;
    }
}
int main(){
    cout<<"Enter the number of vertices: ";
    cin>>v;
    graph.resize(v , unordered_map<int , int> ());
    int e; // Number of edges
    cout<<"Enter the number of edges: ";
    cin>>e;
    cout<<"Start entering source , destination and weight for each edge: "<<endl;
    while(e--){
        int s , d , wt; // source and destination
        cin>>s>>d>>wt;
        add_edge(s , d , wt);
    }
    display();
}