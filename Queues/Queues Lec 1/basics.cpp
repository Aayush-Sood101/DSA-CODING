#include<iostream>
#include<queue>
#include<stack>
using namespace std;
void display(queue<int> &q){
    int n = q.size();
    for(int i = 1;i <= n;i++){
        cout<<q.front()<<" ";
        q.push(q.front());
        q.pop();
    }
    cout<<endl;
}
void reverse(queue<int> &q){
    stack<int> st;
    int n = q.size();
    while(q.size()>0){
        st.push(q.front());
        q.pop();
    }
    while(st.size()>0){
        q.push(st.top());
        st.pop();
    }
}
void removeEvenIndex(queue<int> &q){ //0 based indexing
    int n = q.size();
    for(int i = 0 ;i<n;i++){
        if(i%2!=0)
        q.push(q.front());;
        q.pop();
    }
}
int main(){
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    display(q);
    reverse(q);
    display(q);
}