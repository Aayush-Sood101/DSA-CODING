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
    int lo=0,hi=n-1;int ans=-1;
    while(lo<=hi)
    {
        int mid=(hi+lo)/2;
        if(v[mid]==mid)
        lo=mid+1;
        else
        {
            ans=mid;
            hi=mid-1;
        }

    }
    cout<<"MISSING MID :"<<ans;
}