//Interleave the first and second half of a queue
#include<iostream>
#include<queue>
#include<stack>
#include<algorithm>
using namespace std;
int main(){
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    q.push(7);
    q.push(8);
    stack<int> st;
    int n = q.size();
    for(int i = 0 ; i<n/2 ; i++){
        st.push(q.front());
        q.pop();
    }
    while(st.size() > 0){
        q.push(st.top());
        st.pop();
    }
    for(int i = 0 ; i<n/2 ; i++){
        st.push(q.front());
        q.pop();
    }
    while(st.size() > 0){
        q.push(st.top());
        st.pop();
        q.push(q.front());
        q.pop();
    }
    for(int i = 0 ; i<n ; i++){
        st.push(q.front());
        q.pop();
    }
    while(st.size() > 0){
        q.push(st.top());
        st.pop();
    }
    for(int i= 0 ; i<n ; i++){
        cout<<q.front()<<" ";
        q.push(q.front());
        q.pop();
    }

}