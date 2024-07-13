#include<iostream>
using namespace std;
int main()
{
    int m,n;
    cout<<"Enter no. of rows and columns : ";
    cin>>m>>n;
    int arr[m][n];
    cout<<"Enter array elements : ";
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }
    cout<<"Enter l1 r1 l2 r2";
    int l1,r1,l2,r2;
    cin>>l1>>r1>>l2>>r2;
    if(l2<l1)
    {
        int temp=l1;
        l1=l2;
        l2=temp;
    }
    if(r2<r1)
    {
        int temp=r1;
        r1=r2;
        r2=temp;
    }
    int sum=0;
    for(int i=l1;i<=l2;i++)
    {
        for(int j=r1;j<=r2;j++)
        {
            sum+=arr[i][j];
        }
    }
    cout<<"REQUIRED SUM : "<<sum;
}