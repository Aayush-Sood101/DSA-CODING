#include<iostream>
#include<stack>
using namespace std;
int priority(char ch){
    if(ch == '+' || ch == '-')
    return 1;
    else
    return 2;
}
int solve(int val1, char op , int val2){
    if(op == '+')
    return val1 + val2;
    else if(op == '-')
    return val1 - val2;
    else if(op == '*')
    return val1 * val2;
    else
    return val1 / val2;
}
int calculate(string s) {
    stack<int> st;
    stack<char> op;
    for(int i = 0 ;i<s.length() ; i++){
        cout<<"hello";
        if(s[i] == ' ') //spaces skipped
        continue;
        else if((int)s[i] >= 48 && (int)s[i] <= 57) //number pushed
        st.push((int)s[i] - 48);
        else{ // + - * /
            if(op.size() == 0)
            op.push(s[i]);
            if(priority(s[i]) > priority(op.top()))
            op.push(s[i]);
            else{ // prioroity <= kaam karo
                while(op.size() > 0 && priority(s[i]) <= priority(op.top())){
                    int val2 = st.top();
                    st.pop();
                    int val1 = st.top();
                    st.pop();
                    char ch = op.top();
                    op.pop();
                    int ans = solve(val1 , ch , val2);
                    st.push(ans);
                    cout<<ans;
                }
                op.push(s[i]);
            }
        }
    }
    while(op.size() > 0){
        int val2 = st.top();
        st.pop();
        int val1 = st.top();
        st.pop();
        char ch = op.top();
        op.pop();
        int ans = solve(val1 , ch , val2);
        st.push(ans);
    }
    return st.top();
}
int main(){
    string s = "3*2/2";
    cout<<calculate(s);
}