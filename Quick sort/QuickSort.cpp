#include<iostream>
using namespace std;
int partition(int arr[],int si,int ei)
{
    int pivotele=arr[(si+ei)/2];
    int count=0;
    for(int i=si;i<=ei;i++)
    {
        if(i==(si+ei)/2) continue;
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
        if(arr[i]<=pivotele)
        i++;
        if(arr[j]>pivotele)
        j--;
        else if(arr[i]>pivotele && arr[j]<=pivotele)
        {
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }
    return pivotIdx;
}
void quicksort(int arr[],int si,int ei)
{
    //base case
    if(si>=ei)
    return;
    //5,1,8,2,7,6,3,4
    int pi=partition(arr,si,ei);
    //4,1,3,2,5,7,8,6
    //Now using recusrsive calls
    quicksort(arr,si,pi-1);
    quicksort(arr,pi+1,ei);
}
int main()
{
    int arr[] = {5,1,8,2,7,6,3,4,-8};
    int n=sizeof(arr)/sizeof(arr[0]);
    quicksort(arr,0,n-1);
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
}