#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter length of string ";
    int n;cin>>n;
    char str[n];
    cout<<"Enter string ";
    for(int i=0;i<n;i++)
    {
        cin>>str[i];
    }
    int c=0;
    for(int i=0;i<n;i++)
    {
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u')
        c++;
    }
    cout<<"No. of vowels : "<<c;
}