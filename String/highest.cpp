#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    cout<<"Enter a string : ";
    string s;
    cin>>s;
    int c1=0,c2=0;
    char c='\0';
    for(int i=0;i<s.length();i++)
    {
        for(int j=i+1;j<s.length();j++)
        {
            if(s[i]==s[j])
            c1++;
        }
        if(c2<c1)
        {
            c2=c1;
            c=s[i];
        }
        c1=0;
    }
    if(c!='\0')
    cout<<"Character occuring most times : "<<c;
    else
    cout<<"Every character occurs only once ";
}