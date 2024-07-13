#include<iostream>
#include<vector>
using namespace std;
bool check(int n)
{
    if(n==1)
    return true;
    else if(n%2==0)
    return true;
    else
    return false;
}
int main()
{
    cout<<"Enter a number ";
    int n;
    cin>>n;
    cout<<check(n);
}