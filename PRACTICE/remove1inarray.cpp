#include<vector>
#include<iostream>
using namespace std;
void skip1(int arr[],vector<int> &v ,int i, int n)
{
    if(i==n)
    return;
    int value=arr[i];
    if(value==1)
    skip1(arr,v,i+1,n);
    else
    {
        v.push_back(value);
        skip1(arr,v,i+1,n);
    }
}
int main()
{
    cout<<"Enter size of array : ";
    int n;
    cin>>n;
    int arr[n];
    cout<<"Enter array elements : ";
    for(int i=0;i<n;i++)
    cin>>arr[i];
    vector<int> v;
    skip1(arr,v,0,n);
    for(int i=0;i<v.size();i++)
    cout<<v[i]<<" ";
}