#include<iostream>
using namespace std;
int main()
{
    int arr[2][4];
    for(int i=0;i<2;i++)
    {
        if(i==0)
        cout<<"Enter Roll No. of 4 students ";
        else
        cout<<"Enter marks of 4 students ";
        for(int j=0;j<4;j++)
        {
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<2;i++)
    {
        if(i==0)
        cout<<"ROLL NO  ";
        else
        cout<<"MARKS  ";
        for(int j=0;j<4;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}