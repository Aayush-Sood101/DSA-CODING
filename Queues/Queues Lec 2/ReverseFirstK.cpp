#include<iostream>
#include<queue>
#include<stack>
using namespace std;
void reverse(queue<int> &q,int k){
    stack<int> st;
    int n = q.size();
    //moving first k from queue to stack
    for(int i = 1;i <= k;i++){
        st.push(q.front());
        q.pop();
    }
    // pushing k from stack to queue
    while(st.size() > 0){
        q.push(st.top());
        st.pop();
    }
    //pushing size - k elements behind
    for(int i = k + 1;i <= n;i++){
        q.push(q.front());
        q.pop();
    }
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
    display(q);
    reverse(q , 3);
    display(q);
}