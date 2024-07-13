#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,2,2,2,3,3,3,5,5,5};
    int n=10;
    int lo=0,hi=n-1;
    int target=5;
    int ans=-1;
    while(lo<=hi)
    {
        int mid=lo+(hi-lo)/2;
        if(arr[mid]==target)
        {
            if(mid==n-1)
            {
                ans = mid;
                break;
            }
            else if(arr[mid+1]!=target)
            {
                ans = mid;
                break;
            }
            else
            lo=mid+1;
        }
        else if(arr[mid]<target)
        lo=mid+1;
        else
        hi=mid-1;
    }
    cout<<ans;
}