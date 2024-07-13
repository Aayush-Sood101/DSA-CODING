#include<iostream>
#include<stack>
using namespace std;
int solve(int val1 , char ch , int val2){
    if(ch == '+')
    return val1 + val2;
    else if(ch == '-')
    return val1 - val2;
    else if(ch == '*')
    return val1 * val2;
    else
    return val1 / val2;
}
int main(){
    string s = "79+4*8/3-";
    stack<int> st;
    for(int i = 0 ;i<s.length();i++){
        if((int)s[i] >= 48 && (int)s[i] <=57)
        st.push(s[i] - '0');
        else{
            int val2 = st.top();
            st.pop();
            int val1 = st.top();
            st.pop();
            char op = s[i];
            int ans = solve(val1 , op , val2);
            st.push(ans);
        }
    }
    cout<<st.top();
}