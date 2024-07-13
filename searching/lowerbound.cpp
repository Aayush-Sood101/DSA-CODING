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
    bool flag=false;
    while(lo<=hi)
    {
        int mid=(hi+lo)/2;
        if(v[mid]==target)
        {
            cout<<v[mid-1];
            flag=true;
            break;
        }
        else if(v[mid]<target)
        lo=mid+1;
        else
        hi=mid-1;
    }
    if(flag==false)
    cout<<v[hi];

}