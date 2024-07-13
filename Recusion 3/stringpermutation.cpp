#include<iostream>
using namespace std;
void helper(string str, string s)
{
    // base case
    if(s=="")
    {
        cout<<str<<endl;
        return;
    }
    //recursive calls
    for(int i=0;i<s.length();i++)
    {
        char ch=s[i];
        string left = s.substr(0,i);
        string right = s.substr(i+1);
        helper(str+ch,left+right);
    }
}
int main()
{
    cout<<"Enter a string ";
    string s;
    cin>>s;
    helper("",s);
}