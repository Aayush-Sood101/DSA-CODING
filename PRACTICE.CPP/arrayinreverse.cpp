#include<iostream>
using namespace std;
void reverse1(int arr[],int n)
{
    // base call
    if(n==-1)
    return;
    cout<<arr[n]<<" ";
    reverse1(arr,n-1);
}
int search(int arr[],int n,int target,bool flag)
{
    if(flag==true)
    return n+1;
    if(n==-1)
    return -1;
    if(target==arr[n])
    flag=true;
    search(arr,n-1,target,flag);
}
int main()
{
    int arr[]={1,2,3,4,5,6,7};
    int n=7;
    // reverse1(arr,n-1);
    cout<<search(arr,n,3,false);
}