#include<iostream>
using namespace std;
int main()
{
    int arr[]={0,0,0,0,0,1,1,1,1};
    int n=9;
    int lo=0,hi=n-1;
    int ans = -1;
    while(lo<=hi)
    {
        int mid=lo+(hi-lo)/2;
        if(arr[mid]==1)
        {
            if(arr[mid-1]!=1)
            {
                ans = mid;
                break;
            }
            else
            hi=mid-1;
        }
        else if(arr[mid]<1)
        lo=mid+1;
        else hi=mid -1;
    }
    cout<<"No. of zeroes : "<<n-ans;
}