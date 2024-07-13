#include<iostream>
#include<climits>
using namespace std;
void insertionsort(int arr[],int n)
{
    for(int i=1;i<=n-1;i++)
    {
        int j=i;
        while(j>=1)
        {
            if(arr[j]>=arr[j-1])
            break;
            else
            swap(arr[j],arr[j-1]);
            j--;
        }
    }
}
int main()
{
    int arr[]={4,3,7,47,9,6,4,46};
    int n=sizeof(arr)/sizeof(arr[0]);
    insertionsort(arr,n);
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
}