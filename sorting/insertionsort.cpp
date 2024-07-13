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
    for(int i=1;i<n;i++)
    {
        int j=i;
        // while(j>=1)
        // {
        //     if(arr[j]>=arr[j-1])
        //     break;
        //     else
        //     swap(arr[j],arr[j-1]);
        //     j--;
        // }
        while(j>=1 && arr[j]<arr[j-1])
        {
            swap(arr[j],arr[j-1]);
            j--;
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }
}