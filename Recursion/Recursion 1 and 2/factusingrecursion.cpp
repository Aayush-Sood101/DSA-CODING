#include<iostream>
using namespace std;
int fact(int n)
{
    // base case
    if(n==1 || n==0)
    return 1;
    // recursive call  + required code
    return n*fact(n-1);
    //Another method acc to syntax

    // base case
    if(n==1 || n==0)
    return 1;
    //code + recursive call
    int ans = n*fact(n-1);
    //return
    return ans;
    
}
int main()
{
    cout<<"Enter number whose factorila is to be calculated ";
    int n;
    cin>>n;
    cout<<fact(n);
}