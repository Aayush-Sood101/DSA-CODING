/*Given a string of brackets check whether
it is valid or not
*/
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
bool validParenthesis(string &s){
    //base case
    if(s.length()%2!=0)
    return false;
    stack<char> st;
    for(int i = 0;i<s.length();i++){
        if(s[i]=='(' || s[i]=='{' || s[i]=='[')
        st.push(s[i]);
        else{
            if(st.size()==0)
            return false;
            else if(st.top() == s[i])
            st.pop();
            else
            return false;
        }
        /*No need for condition since odd
        brackets condition is  checked first*/
    }
    return true;
}
int main(){
    string s = "[[{]}()]";
    cout<<validParenthesis(s);
}