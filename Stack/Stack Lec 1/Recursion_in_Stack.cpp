#include<iostream>
#include<stack>
using namespace std;
void displayRec(stack<int> &st){
    //base case
    if(st.size()==0)
    return;
    //code + recursion
    int x = st.top();
    st.pop();
    displayRec(st);
    cout<<x<<" ";
    st.push(x);
}
void pushAtBottomRec(stack<int> &st , int val){
    //base case
    if(st.size()==0){
        st.push(val);
        return ; 
    }
    //code + recursion
    int x = st.top();
    st.pop();
    pushAtBottomRec(st , val);
    st.push(x);
}
void reverseStackRec(stack<int> &st){
    //base case
    if(st.size()==1)
    return;
    //code + recursion
    int x = st.top();
    st.pop();
    reverseStackRec(st);
    pushAtBottomRec(st , x);
}
int main(){
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    displayRec(st);
    cout<<endl;
    reverseStackRec(st);
    displayRec(st);
    cout<<endl;
}