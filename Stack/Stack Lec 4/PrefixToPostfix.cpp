#include<iostream>
#include<stack>
using namespace std;
string solve(string val1, char op, string val2){
    string s= "";
    s += val1;
    s += val2;
    s.push_back(op);
    return s;
}
int main(){
    string s = "-/*+79483";
    stack<string> st;
    for(int i = s.length() - 1;i >= 0 ;i--){
        if((int)s[i] >= 48 && (int)s[i] <=57)
        st.push(to_string(s[i] - '0'));
        else{
            string val1 = st.top();
            st.pop();
            string val2 = st.top();
            st.pop();
            char op = s[i];
            string ans = solve(val1 , op , val2);
            st.push(ans);
        }
    }
    cout<<st.top();
}