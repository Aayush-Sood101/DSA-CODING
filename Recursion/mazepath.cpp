
#include<iostream>
using namespace std;
int noofways(int i , int j ,int m ,  int n)
{
    // base calls
    if(i==m && j==n)
    return 1;
    else if(i>m || j>n)
    return 0;
    //recursive call
    return noofways(i+1,j,m,n) + noofways(i,j+1,m,n);
}
using namespace std;
int main()
{
    cout<<"Enter no . of rows and columns : ";
    int m,n;
    cin>>m>>n;
    cout<<"NO. of maze paths : "<<noofways(0,0,m-1,n-1);
}