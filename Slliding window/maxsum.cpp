//Maxiumum sum of subarray of size k 
#include<iostream>
#include<climits>
using namespace std;
//optimised solution (Sliding window)
void optimised(int arr[],int n,int k)
{
    int sum=0;
    for(int i=0;i<k;i++)
    sum+=arr[i];
    int maxsum=sum;
    int i=1;
    int j=k;
    int idx=0;
    while(j<n)
    {
        sum +=(arr[j] - arr[i-1]);
        if(sum>maxsum)
        {
            maxsum=sum;
            idx=i;
        }
        i++;
        j++;
    }
    for(int i=idx;i<idx+k;i++)
    cout<<arr[i]<<" ";
}
//brute force solution 
void brute_force(int arr[],int n,int k)
{
    int maxsum=INT_MIN;
    int idx=-1;
    for(int i=0;i<=n-k;i++)
    {
        int sum=0;
        for(int j=i;j<i+k;j++)
        {
            sum +=arr[j];
        }
        if(sum>maxsum)
        {
            maxsum=sum;
            idx=i;
        }
    }
    for(int i=idx;i<idx+k;i++)
    cout<<arr[i]<<" ";
}
int main()
{
    int arr[] = {7,1,2,5,8,4,9,3,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=3;
    optimised(arr,n,k);
}