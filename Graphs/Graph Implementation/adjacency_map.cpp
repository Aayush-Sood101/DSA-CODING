#include<bits/stdc++.h>
using namespace std;

int v; //no. of vertices
vector<unordered_map<int , int>> graph;
void addEdge(int src , int dest , int weight ,  bool bi_dir = true){
    graph[src][dest] = weight;
    if(bi_dir){
        graph[dest][src] = weight;
    }
}

void display(){
    for(int i = 0 ; i<v ; i++){
        cout<<i<<"->";
        for(auto ele: graph[i]){
            cout<<ele.first<<" "<<ele.second<<" , ";
        }
        cout<<endl;
    }
}

int main(){
    cout<<"Enter the number of vertices: ";
    cin>>v;

    graph.resize(v , unordered_map<int , int> ());
    cout<<"Enter the edges in the form of (src dest weight) "<<endl;
    cout<<"Enter (-1 -1 -1) to stop"<<endl;
    while(true){
        int src, dest , weight;
        cin>>src>>dest>>weight;
        if(src == -1)
        break;
        addEdge(src , dest , weight);
    }

    display();
}