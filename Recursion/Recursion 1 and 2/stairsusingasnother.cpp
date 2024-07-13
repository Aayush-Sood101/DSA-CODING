/*Either one or two steps allowed at one time
return the combinations*/
#include<iostream>
using namespace std;
// int noofways(int i,int n)
// {
//     if(i==n)
//     return 1;
//     if(i==n+1)
//     return 0;
//     return noofways(i+1,n) + noofways(i+2,n);
// }
int noofways(int n)
{
    if(n==1)
    return 1;
    if(n==2)
    return 2;
    return noofways(n-1) + noofways(n-2);
}
int main()
{
    cout<<"Enter no . of stairs ";
    int n;
    cin>>n;
    cout<<noofways(n);
}