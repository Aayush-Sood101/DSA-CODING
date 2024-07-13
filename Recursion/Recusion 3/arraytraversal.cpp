#include<iostream>
using namespace std;
void display(int arr[],int i, int n)
{
    if(i==n)
    return;
    cout<<arr[i];
    display(arr,++i,n);
}
int main()
{
    int arr[] = {1,2,3,4,5,6,7,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    display(arr,0,n);
}