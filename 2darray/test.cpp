#include<iostream>
using namespace std;
int main()
{
    int m1,n1;
    cout<<"Enter no. of rows and columns : ";
    cin>>m1>>n1;
    int matrix1[m1][n1];
    cout<<"Enter matrix elements : ";
    for(int i=0;i<m1;i++)
    {
        for(int j=0;j<n1;j++)
        {
            cin>>matrix1[i][j];
        }
    }
    int m2,n2;
    cout<<"Enter no. of rows and columns : ";
    cin>>m2>>n2;
    int matrix2[m2][n2];
    cout<<"Enter matrix elements : ";
    for(int i=0;i<m2;i++)
    {
        for(int j=0;j<n2;j++)
        {
            cin>>matrix2[i][j];
        }
    }
    if(n1!=m2)
    {
        cout<<"matrix multiplication not possible";
    }
    else
    {
        int arr[m1][n2];
        for(int i=0;i<m1;i++)
        {
            for(int j=0;j<n2;j++)
            {
                int sum=0;
                for(int k=0;k<n1;k++)
                {
                    sum=sum+(matrix1[i][k]*matrix2[k][j]);
                }
                arr[i][j]=sum;
            }
        }
        
        for(int i=0;i<m1;i++)
        {
            for(int j=0;j<n2;j++)
            {
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }
    }
}