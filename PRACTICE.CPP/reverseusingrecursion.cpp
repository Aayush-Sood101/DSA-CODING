#include<iostream>
using namespace std;
int helper(int n,int rev)
{
    //base call;
    if(n==0)
    return rev;
    //code
    int rem=n%10;
    rev=rev*10 + rem;
    n=n/10;
    //recursive call
    helper(n,rev);
}
int main()
{
    cout<<"Enter a number : ";
    int n;
    cin>>n;
    cout<<"Reversed number : "<<helper(n,0);
}