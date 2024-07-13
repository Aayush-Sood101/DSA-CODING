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
void removeKthTop(stack<int>& st , int k){
    stack<int> temp;
    for(int i = 1;i<k;i++){
        temp.push(st.top());
        st.pop();
    }
    st.pop();
    while(temp.size()>0){
        st.push(temp.top());
        temp.pop();
    }
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
    removeKthTop(st,3);
    displayRec(st);
    cout<<endl;
}