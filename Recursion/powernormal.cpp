#include<iostream>
using namespace std;
int pow(int a , int b)
{
    if(b==0)
    return 1;
    return a * pow(a,b-1);
}
int main()
{
    cout<<"Enter the value of base and power ";
    int a,b;
    cin>>a>>b;
    cout<<pow(a,b);
}
