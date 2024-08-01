#include<iostream>
#include<queue>
using namespace std;
int main(){
    //Max Heap by Default

    // priority_queue<int> pq;
    // pq.push(10);
    // pq.push(80);
    // pq.push(-1);
    // pq.push(40);
    // cout<<pq.top()<<endl;
    // pq.pop();
    // cout<<pq.top()<<endl;

    //for Min Heap
    
    priority_queue<int , vector<int> , greater<int>> pq;
    pq.push(10);
    pq.push(20);
    pq.push(30);
    pq.push(40);
    pq.push(50);
    cout<<pq.top()<<endl;
    pq.pop();
    cout<<pq.top()<<endl;
}