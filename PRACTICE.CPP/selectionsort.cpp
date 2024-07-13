#include<iostream>
#include<climits>
using namespace std;
void selectionsort(int arr[],int n)
{
    int mindx=-1;
    for(int i=0;i<n-1;i++)
    {
        int min=INT_MAX;
        for(int j=i;j<n-1;j++)
        {
            if(arr[j]<min)
            {
                mindx=j;
                min=arr[j];
            }
        }
        swap(arr[i],arr[mindx]);
    }
}
int main()
{
    int arr[]={4,3,7,47,9,6,4,46};
    int n=sizeof(arr)/sizeof(arr[0]);
    selectionsort(arr,n);
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
}