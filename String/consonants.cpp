#include<iostream>
#include<string>
using namespace std;
int main()
{
    cout<<"Enter a string : ";
    string s;cin>>s;
    int c=0;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]!='a' && s[i]!='e'&&  s[i]!='i' && s[i]!='o' && s[i]!='u')
        c++;
    }
    cout<<"Number od consonats : "<<c;
}