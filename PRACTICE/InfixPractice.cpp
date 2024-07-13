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
    else if(op == '/')
    return val1 / val2;
}
int main(){
    string s = "8+9*4/4-3";
    stack<int> val;
    stack<char> op;
    for(int i = 0;i<s.length();i++){
        if((int)s[i] >= 48 && (int)s[i] <= 57)
        val.push(s[i] - 48);
        else{ // + - * / (  )
            if(op.size() == 0)
            op.push(s[i]);
            else if(s[i] == '(')
            op.push(s[i]);
            else if(s[i] == ')'){
                while(op.top() != '('){
                    int val2 = val.top();
                    val.pop();
                    int val1 = val.top();
                    val.pop();
                    char ch = op.top();
                    op.pop();
                    int ans = solve(val1 , ch , val2 );
                    val.push(ans);
                }
                op.pop(); //remove opening bracket
            }
            else if(priority(s[i]) > priority(op.top()))
            op.push(s[i]);
            else{
                while(op.size()>0 && priority(s[i]) <= priority(op.top())){
                    int val2 = val.top();
                    val.pop();
                    int val1 = val.top();
                    val.pop();
                    char ch = op.top();
                    op.pop();
                    int ans = solve(val1 , ch , val2 );
                    val.push(ans);
                }
                op.push(s[i]);
            }
        }
    }
    while(op.size()>0){
        int val2 = val.top();
        val.pop();
        int val1 = val.top();
        val.pop();
        char ch = op.top();
        op.pop();
        int ans = solve(val1 , ch , val2 );
        val.push(ans);
    }
    cout<<val.top();
}