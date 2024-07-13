#include<iostream>
using namespace std;
int main()
{
    int arr[]={6,4,5,2,1,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    //cycle sort
    int i=0;
    while(i<n)
    {
        int correctIdx=arr[i] - 1;
        if(i==correctIdx)
        i++;
        else
        {
            int temp=arr[i];
            arr[i]=arr[correctIdx];
            arr[correctIdx]=temp;
        }
    }
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
}