#include<iostream>
#include<string>
using namespace std;
int main()
{
    cout<<"Enter a string : ";
    string s;cin>>s;
    string s1;
    for(int i=s.length()-1;i>=0;i--)
    {
        s1.push_back(s[i]);
    }
    if(s1==s)
    cout<<"YES";
    else
    cout<<"NO";
}