#include<iostream>
#include<vector>
#include<list>
using namespace std;

vector<list<int>> graph;
int v; // number of vertices
void add_edge(int src , int dest , bool bi_dir = true){
    graph[src].push_back(dest);
    if(bi_dir){
        graph[dest].push_back(src);
    }
}
void display(){
    for(int i = 0 ; i<graph.size() ; i++){
        cout<<i<<" -> ";
        for(auto ele : graph[i]){
            cout<<ele<<" , ";
        }
        cout<<endl;
    }
}
int main(){
    cout<<"Enter the number of vertices: ";
    cin>>v;
    graph.resize(v , list<int> ());
    int e; // Number of edges
    cout<<"Enter the number of edges: ";
    cin>>e;
    cout<<"Start entering source and destination for each edge: "<<endl;
    while(e--){
        int s , d; // source and destination
        cin>>s>>d;
        add_edge(s , d);
    }
    display();
}