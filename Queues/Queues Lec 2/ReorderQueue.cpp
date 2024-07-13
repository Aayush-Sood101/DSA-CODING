/*
Interleave first half with second half(Even length)
Using one stack only
*/
/** Steps:
 * First half ko q se st and then st se q
 * Second half of q se st
 * st se q and q se q
 * Whole q reverse
*/
#include<iostream>
#include<queue>
#include<stack>
using namespace std;
void Interleave(queue<int> &q){
    int n = q.size();
    stack<int> st;
    //First half ko q se st and st se q
    for(int i = 1;i<=n/2;i++){
        st.push(q.front());
        q.pop();
    }
    while(st.size() > 0){
        q.push(st.top());
        st.pop();
    }
    //second half of q se st
    for(int i = 1;i<=n/2;i++){
        st.push(q.front());
        q.pop();
    }
    //st se q and q se q
    while(st.size() > 0){
        q.push(st.top());
        st.pop();
        q.push(q.front());
        q.pop();
    }
    //whole array reverse
    for(int i = 1;i<=n;i++){
        st.push(q.front());
        q.pop();
    }
    while(st.size() > 0){
        q.push(st.top());
        st.pop();
    }
}
void display(queue<int> &q){
    int n = q.size();
    for(int i = 1; i<=n;i++){
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
    q.push(7);
    q.push(8);
    display(q);
    Interleave(q);
    display(q);
}