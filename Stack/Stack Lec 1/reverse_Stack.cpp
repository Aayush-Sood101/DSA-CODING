/* stack is to be reversed given that 
reversed stack should be in original stack only
*/
#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    stack<int> temp1;
    stack<int> temp2;
    //from st to temp1
    while(st.size()>0){
        temp1.push(st.top());
        st.pop();
    }
    //from temp1 to temp2;
    while(temp1.size()>0){
        temp2.push(temp1.top());
        temp1.pop();
    }
    //from temp2 to st
    while(temp2.size()>0){
        st.push(temp2.top());
        temp2.pop();
    }
    cout<<st.top();
}