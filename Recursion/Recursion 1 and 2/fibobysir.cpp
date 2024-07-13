#include<iostream>
using namespace std;
//fibo(n) = fibo(n-2) + fibo(n-2)
int fibo(int n)
{
    //base call
    if(n==1 || n==2 )
    return 1;
    //recursive call
    return fibo(n-1)+fibo(n-2);
}
int main()
{
    cout<<"Enter the nth term ";
    int n;
    cin>>n;
    cout<<fibo(n);
}