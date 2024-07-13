#include<iostream>
#include<climits>
#include<algorithm>
using namespace std;
int main()
{
    cout<<"Enter the size of array ";
    int n; cin>>n;
    cout<<"Enter array elements : ";
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n-1;i++)
    {
        int min=INT_MAX;int idx;
        for(int j=i;j<n;j++)
        {
            if(arr[j]<min)
            {
                min=arr[j];
                idx=j;
            }
        }
        swap(arr[i],arr[idx]);
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}