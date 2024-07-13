#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    string s;
    cout<<"Enter a string : ";
    cin>>s;
    string s1=s;
    reverse(s.begin(),s.end());
    s1+=s;
    cout<<s1;
}