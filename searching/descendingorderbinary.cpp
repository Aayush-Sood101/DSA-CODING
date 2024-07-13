#include<iostream>
#include<vector>
using namespace std;
int main()
{
    cout<<"Enter size of array : ";
    int n;
    cin>>n;
    cout<<"Enter array elements : ";
    vector<int> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    cout<<"Enter target : ";
    int tar;
    cin>>tar;
    int lo=0;
    int hi=n-1;
    bool flag=false;
    while(lo<=hi)
    {
        int mid=lo+(hi-lo)/2;
        if(v[mid]==tar)
        {
            flag=true;
            break;
        }
        else if (v[mid]<tar)
        hi=mid-1;
        else 
        lo=mid+1;
    }
    if(flag==true)
    cout<<"Element is present ";
    else
    cout<<"Element is not present ";
}