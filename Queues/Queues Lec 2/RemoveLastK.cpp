#include<iostream>
#include<queue>
using namespace std;
void remove(queue<int> &q, int k){
    int n = q.size();
    for(int i = 1;i<=n-k;i++){
        q.push(q.front());
        q.pop();
    }
    for(int i = 1;i<=k;i++)
    q.pop();
}
void display(queue<int> &q){
    int n = q.size();
    for(int i = 1;i <= n;i++){
        cout<<q.front()<<" ";
        q.push(q.front());
        q.pop();
    }
    cout<<endl;
}
int main(){
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    display(q);
    remove(q,4); //remove last k
    display(q);
}