#include<iostream>
#include<string>
using namespace std;
int main()
{
    cout<<"Enter  a integer : ";
    int n;
    cin>>n;
    string s=to_string(n);
    cout<<s.length();
}