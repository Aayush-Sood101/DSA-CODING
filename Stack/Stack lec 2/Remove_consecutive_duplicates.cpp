//to remove consecutive duplicates in a string
#include<iostream>
#include<stack>
#include<algorithm>
using namespace std;
void removeDuplicate(string &s){
    stack<char> st;
    for(int i = 0;i<s.length();i++){
        if(st.size()==0)
        st.push(s[i]);
        else if(st.top()==s[i])
        continue;
        else
        st.push(s[i]);
    }
    s = "";
    while(st.size()>0){
        s = s + st.top();
        st.pop();
    }
    reverse(s.begin(),s.end());
}
int main(){
    string s="jjjkflliideemmd";
    removeDuplicate(s);
    cout<<s;
}