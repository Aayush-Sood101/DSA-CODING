#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,1,2,3,4,5,6,7,8,9};
    int n=10;
    int lo=0,hi=n-1;
    while(lo<=hi)
    {
        int mid=lo+(hi-lo)/2;
        if(arr[mid]==mid+1)
        lo=mid+1;
        else if(arr[mid-1]==mid)
        {
            cout<<"Repeated element is "<<mid;
            break;
        }
        else
        hi=mid-1;
    }
}