#include<iostream>
using namespace std;

int pow(int a , int b)
{
    // base call
    if(b==0)
    return 1;
    if(b==1)
    return a;
    // recursive call
    int ans = pow(a,b/2);
    if(b%2==0)
    return ans * ans;
    else
    return ans * ans * 2;
}
int main()
{
    cout<<"Enter the value of base and power ";
    int a,b;
    cin>>a>>b;
    cout<<pow(a,b);
}
