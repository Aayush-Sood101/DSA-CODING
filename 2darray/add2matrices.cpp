#include<iostream>
using namespace std;
int main()
{
    int m1,n1;
    cout<<"Enter no. of rows and columns : ";
    cin>>m1>>n1;
    int arr1[m1][n1];
    cout<<"Enter array elements : ";
    for(int i=0;i<m1;i++)
    {
        for(int j=0;j<n1;j++)
        {
            cin>>arr1[i][j];
        }
    }
    int m2,n2;
    cout<<"Enter no. of rows and columns : ";
    cin>>m2>>n2;
    int arr2[m2][n2];
    cout<<"Enter array elements : ";
    for(int i=0;i<m2;i++)
    {
        for(int j=0;j<n2;j++)
        {
            cin>>arr2[i][j];
        }
    }
    if(m1==m2 && n1==n2)
    {
        int arr3[m1][n1];
        for(int i=0;i<m2;i++)
        {
            for(int j=0;j<n2;j++)
            {
                arr3[i][j]=0;
            }
        }
        for(int i=0;i<m2;i++)
        {
            for(int j=0;j<n2;j++)
            {
                arr3[i][j]=arr1[i][j]+arr2[i][j];
            }
        }
        for(int i=0;i<m2;i++)
        {
            for(int j=0;j<n2;j++)
            {
                cout<<arr3[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    else
    cout<<"Addition is not possible ";
}