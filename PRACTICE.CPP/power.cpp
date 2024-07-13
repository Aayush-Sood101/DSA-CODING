#include<iostream>
using namespace std;
// int power(int x,int n)
// {
//     if(n==1)
//     return x;
//     return x*power(x,n-1);
// }
int logpower(int x,int n)
{
    if(n==1)
    return x;
    int ans = logpower(x,n/2);
    if(n%2==0)
    return ans*ans;
    else
    return ans*ans*x;
}
int main()
{
    cout<<logpower(3,3);
}