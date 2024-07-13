#include<iostream>
using namespace std;
//fibo(n) = fibo(n-2) + fibo(n-2)
int fibo(int a , int b, int i,int n,int sum)
{
    if(n==1 || n==2)
    return 1;
    //base call
    if(i>n)
    return sum;
    //recusrive call
    sum=a+b;
    a=b;
    b=sum;
    i++;
    fibo(a,b,i,n,sum);
}
int main()
{
    cout<<"Enter the nth term ";
    int n;
    cin>>n;
    int sum=0;
    int i=3;
    cout<<fibo(1,1,i,n,sum);
}