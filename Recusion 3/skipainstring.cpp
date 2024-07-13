#include<iostream>
#include<vector>
#include<climits>
using namespace std;
void skip(string s , string str)
{
    //base case
    if(s=="")//s.length() == 0
    {
        cout<<"String without a : "<<str;
        return;
    }
    char ch=s[0];
    if(ch=='a' || ch=='A')
    skip(s.substr(1),str);
    else
    skip(s.substr(1),str+ch);
}

int main()
{
    cout<<"Enter a string ";
    string s;
    getline(cin,s);
    skip(s,"");
}