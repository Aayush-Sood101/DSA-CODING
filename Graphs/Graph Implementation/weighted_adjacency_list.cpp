#include<iostream>
#include<vector>
#include<list>
using namespace std;

vector<list<pair<int , int>>> graph;
int v; // number of vertices
void add_edge(int src , int dest , int wt , bool bi_dir = true){
    graph[src].push_back({dest , wt});
    if(bi_dir){
        graph[dest].push_back({src , wt});
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
    graph.resize(v , list<pair<int , int>> ());
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