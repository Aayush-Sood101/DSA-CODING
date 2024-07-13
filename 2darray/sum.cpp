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
    int sum=0;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            sum+=arr[i][j];
        }
    }
    cout<<"Sum of array elements : "<<sum;
}