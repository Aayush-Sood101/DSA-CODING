#include<iostream>
#include<climits>
#include <stdio.h>
using namespace std;
int main()
{
    int m,n;
    cout<<"Enter no. of rows and columns : ";
    cin>>m>>n;
    int arr[m][n];int k=1;
    cout<<"Enter array elements : ";
    for(int i=0;i<m;i++) 
    {
        for(int j=0;j<n;j++)
        {
            arr[i][j]=k;
            k++;
        }
    }
    cout<<endl<<endl;
    for(int i=0;i<m;i++)
    {
        for(int j=i;j<n;j++)
        {
            int temp=arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;
        }
    }
    int c=m/2;int i=0;
    while(i<c)
    {
        for(int j=0;j<m;j++)
        {
            int temp=arr[i][j];
            arr[i][j]=arr[m-i-1][j];
            arr[m-i-1][j]=temp;
        }
        i++;
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
