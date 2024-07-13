#include<iostream>
#include<vector>
using namespace std;
int sum(int n)
{
    if(n==0)
    return 0;
    return n+sum(n-1);
}
int main()
{
    cout<<"Enter a number ";
    int n;
    cin>>n;
    cout<<sum(n);
}