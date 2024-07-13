//to find kth smallest element
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
int quicksort(int arr[],int si,int ei,int k)
{
    int pi=partition(arr,si,ei);
    //kth smallest code
    if(pi+1==k)
    return arr[pi];
    else if(pi+1<k)
    quicksort(arr,pi+1,ei,k);
    else
    quicksort(arr,si,pi-1,k);
}
int main()
{
    int arr[] = {8,7,6,5,4,3,2,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=7;
    cout<<quicksort(arr,0,n-1,k);
}