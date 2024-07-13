#include<iostream>
#include<climits>
#include <stdio.h>
#include<vector>
using namespace std;
int main()
{
    int m,n;
    cout<<"Enter no. of rows and columns : ";
    cin>>m>>n;
    int matrix[m][n];
    cout<<"Enter array elements : ";
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>matrix[i][j];
        }
    }
    vector<int> arr(m*n);
    int minr,maxr,minc,maxc;int k=0;
    minr=0,minc=0,maxr=m-1,maxc=n-1;
    while(maxr >= minr && maxc >= minc)
        {
            //right
            for(int i=minc;i<=maxc;i++)
            {
                arr[k]=matrix[minr][i];
                k++;
            }
            minr++;
            //down
            for(int i=minr;i<=maxr;i++)
            {
                arr[k]=matrix[i][maxc];
                k++;
            }
            maxc--;
            //left
            for(int i=maxc;i>=minc;i--)
            {
                arr[k]=matrix[maxr][i];
                k++;
            }
            maxr--;
            //up
            for(int i=maxr;i>=minr;i--)
            {
                arr[k]=matrix[i][minc];
                k++;
            }
            minc++;
        }
    for(int i=0;i<m*n;i++)
    {
        cout<<arr[i]<<" ";
    }
}