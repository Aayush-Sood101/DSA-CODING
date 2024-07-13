#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter a number : ";
    int n;
    cin>>n;
    int lo=1,hi=n;
    while(lo<=hi)
    {
        int mid=lo+(hi-lo)/2;
        if(mid*mid==n)
        {
            cout<<"Yes a perfect square ";
            return 0;
        }
        else if(mid*mid<n)
        lo=mid+1;
        else
        hi=mid-1;
    }
    cout<<"Not   perfect square ";
}