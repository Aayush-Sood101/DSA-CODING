#include<iostream>
using namespace std;
int maxpowerof2(int n)
{
    n = n | n>>1;
    n = n | n>>2;
    n = n | n>>4;
    n = n | n>>8;
    n = n | n>>16;
    return (n+1)/2;
}
int main()
{
    int x=100;
    int temp;
    /*while(x>0)
    {
        temp = x;
        x = x & x-1;
    }*/
    cout<<maxpowerof2(16);
}