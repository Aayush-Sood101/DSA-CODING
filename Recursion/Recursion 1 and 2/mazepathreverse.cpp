/*Either one or two steps allowed at one time
return the combinations*/
#include<iostream>
using namespace std;
int noofways(int m ,int n)
{
    if(m==1 && n==1)
    return 1;
    else if(m==0 || n==0)
    return 0;
    return noofways(m-1,n) + noofways(m,n-1);
}
int main()
{
    cout<<"Enter no . of rows and columns : ";
    int m,n;
    cin>>m>>n;
    cout<<noofways(m,n); 
}