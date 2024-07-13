#include<iostream>
#include<stack>
using namespace std;
string solve(string val1 , char op , string val2){
    string s ="";
    s.push_back(op);
    s += val1;
    s += val2;
    return s;
}
int main(){
    string s = "79+4*8/3-";
    stack<string> st;
    for(int i = 0 ;i<s.length();i++){
        if((int)s[i] >= 48 && (int)s[i] <=57)
        st.push(to_string(s[i] - '0'));
        else{
            string val2 = st.top();
            st.pop();
            string val1 = st.top();
            st.pop();
            char op = s[i];
            string ans = solve(val1 , op , val2);
            st.push(ans);
        }
    }
    cout<<st.top();
}