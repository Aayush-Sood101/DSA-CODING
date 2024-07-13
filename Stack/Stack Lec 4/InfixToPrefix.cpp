#include<iostream>
#include<stack>
using namespace std;
string concatenate(char ch , string val1 ,string val2){
    string s =  "";
    s.push_back(ch);
    s += val1;
    s+= val2;
    return s;
}
int priority(char op){
    if(op == '*' || op == '/')
    return 2;
    else return 1;
}
using namespace std;
int main(){
    string s = "(7+9)*4/8-3";
    stack<string> val;
    stack<char> op;
    for(int i = 0;i<s.length();i++){
        if(s[i] >=48 && s[i] <= 57)
        val.push(to_string(s[i] - 48));
        else{
            if(op.size() == 0)
            op.push(s[i]);
            //3 extra conditions for brackets
            else if(s[i] == '(')
            op.push(s[i]);
            else if(op.top() == '(')
            op.push(s[i]);
            else if(s[i] == ')'){
                while(op.top() != '('){
                    char ch = op.top();
                    op.pop();
                    string val2 = val.top();
                    val.pop();
                    string val1 = val.top();
                    val.pop();
                    string ans = concatenate(ch,val1,val2);
                    val.push(ans);
                }
                op.pop(); //remove opening bracket
            }
            else if(priority(s[i])>priority(op.top()))
            op.push(s[i]);
            else{ //i have to do val1 op val2
                while(op.size()>0 && priority(s[i])<=priority(op.top())){
                    char ch = op.top();
                    op.pop();
                    string val2 = val.top();
                    val.pop();
                    string val1 = val.top();
                    val.pop();
                    string ans = concatenate(ch,val1,val2);
                    val.push(ans);
                }
                op.push(s[i]);
            }
        }
    }
    //the operator stack can still have values
    while(op.size() > 0){
        char ch = op.top();
        op.pop();
        string val2 = val.top();
        val.pop();
        string val1 = val.top();
        val.pop();
        string ans = concatenate(ch , val1 ,val2);
        val.push(ans);
    }
    cout<<val.top();
}