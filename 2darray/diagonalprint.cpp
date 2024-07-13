#include<iostream>
#include<climits>
#include <stdio.h>
using namespace std;
int main()
{
    int m,n;
    cout<<"Enter no. of rows and columns : ";
    cin>>m>>n;
    int arr[m][n];int k=0;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            arr[i][j]=k;k++;
        }
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j || (i+j)==m-1)
            cout<<arr[i][j]<<" ";
            else cout<<" ";
        }
        cout<<endl;
    }
}