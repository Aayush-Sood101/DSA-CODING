#include<iostream>
#include<string>
using namespace std;
int main()
{
    cout<<"Enter a string : ";
    string s;cin>>s;
    int a=s.length()/2;
    for(int i=a,j=s.length()-1;i<j;i++,j--)
    {
        char temp=s[i];
        s[i]=s[j];
        s[j]=temp;
    }
    cout<<s;
}