#include<bits/stdc++.h>
#define pii pair<int , int> 
using namespace std;

int v; //no. of vertices
vector<list<pii>> graph;
void addEdge(int src , int dest , int weight ,bool bi_dir = true){
    graph[src].push_back({dest , weight});
    if(bi_dir){
        graph[dest].push_back({src , weight});
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

    graph.resize(v , list<pii> ());
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