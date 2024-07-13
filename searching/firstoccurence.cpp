#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cout<<"Enter size of array : ";
    cin>>n;
    vector <int> v(n);
    cout<<"Enter array elements : ";
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    cout<<"Enter tasrget : ";
    int target;
    cin>>target;
    int lo=0,hi=n-1;
    while(lo<=hi)
    {
        int mid=(hi+lo)/2;
        if(v[mid]==target)
        {
            if(v[mid-1]==target)
            hi=mid-1;
            else
            {
                cout<<"INDEX : "<<mid;
                return 0;
            }
        }
        else if(v[mid]<target)
        lo=mid+1;
        else
        hi=mid-1;
    }
    cout<<"Element not presenty in array";
}