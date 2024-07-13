#include<iostream>
using namespace std;
int odd(int a , int b,int sum)
{
    if(a%2==0)
    a++;
    if(a>b)
    return sum;
    odd(a+2,b,sum+a);
}
int main()
{
    cout<<"Enter a and b ";
    int a,b;
    cin>>a>>b;
    int sum=0;
    cout<<odd(a,b,sum);
}