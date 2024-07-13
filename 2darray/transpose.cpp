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
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }
    int arr1[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            arr1[i][j]=arr[j][i];
        }
        cout<<endl;
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<arr1[i][j]<<" ";
        }
        cout<<endl;
    }
}