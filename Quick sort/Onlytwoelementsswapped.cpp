//Sort an array in which only two elements are swapped
#include<iostream>
using namespace std;
void partition(int arr[],int si,int ei,int n)
{
    int pivotele=arr[(si+ei)/2];
    int count = 0;
    for(int i=si;i<=ei;i++)
    {
        if(i==(si+ei)/2)
        continue;
        if(arr[i]<=pivotele)
        count++;
        
    }
    int pivotIdx=count+si;
    //1st task
    swap(arr[(si+ei)/2],arr[pivotIdx]);
    
    //2nd task
    int i=si;
    int j=ei;
    while(i<pivotIdx && j>pivotIdx)
    {
        if(arr[i]<=arr[pivotIdx])
        i++;
        if(arr[j]>arr[pivotIdx])
        j--;
        else if(arr[i]>pivotIdx && arr[j]<=arr[pivotIdx])
        {
            swap(arr[i],arr[j]);
            i++;j--;
        }
    }
}
void quickSort(int arr[],int si,int ei,int n)
{
    partition(arr,si,ei,n);
}
int main()
{
    int arr[] = {3,8,6,7,5,9,10};
    int n=sizeof(arr)/sizeof(arr[0]);
    quickSort(arr,0,n-1,n);
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
}