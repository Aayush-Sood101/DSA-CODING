#include<iostream>
using namespace std;
int hcf(int a , int b)
{
    if(a==0)
    return b;
    return hcf(b%a,a);
}
int main()
{
    int a=95,b=120;
    cout<<"HCF of a and b : "<<hcf(a,b);
}