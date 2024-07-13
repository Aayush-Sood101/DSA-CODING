#include<iostream>
using namespace std;
void incdec(int n , int i)
{
    if( i > n)
    return;
    cout<<i;
    incdec(n,i+1);
    if(i>1)cout<<i-1;
}
int main()
{
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    incdec(n,1);
}