#include<iostream>
using namespace std;
int main()
{
    int n1 = 24;
    int n2 = n1;
    n2 = n2 | n2>>1;
    n2 = n2 | n2>>2;
    n2 = n2 | n2>>4;
    n2 = n2 | n2>>8;
    n2 = n2 | n2>>16;
    n1 = n1 ^ n2;
    cout<<n1;
}