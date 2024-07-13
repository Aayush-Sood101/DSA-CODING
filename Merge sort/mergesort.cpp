#include<iostream>
#include<vector>
using namespace std;
void merge(vector<int> &a,vector<int> &b,vector<int> &v)
{
    int i=0,j=0,k=0;
    while(i<a.size() && j<b.size())
    {
        if(a[i]<=b[j])
        v[k++]=a[i++];
        else
        v[k++]=b[j++];
    }
    if(i==a.size())
    {
        while(j<b.size())
        v[k++]=b[j++];
    }
    if(j==b.size())
    {
        while(i<a.size())
        v[k++]=a[i++];
    }
}
void mergeSort(vector<int> &v)
{
    int n=v.size();
    //base case
    if(n==1)
    return;
    // create two new arrays
    int n1=n/2;
    int n2=n-n1;
    vector<int> a(n1);
    vector<int> b(n2);
    //copy pasting
    for(int i=0;i<n1;i++)
    a[i]=v[i];
    for(int i=0;i<n2;i++)
    b[i]=v[i+n1];
    //magic aka recursion
    mergeSort(a);
    mergeSort(b);
    //merge
    for(int i=0;i<v.size();i++)
    cout<<v[i]<<" ";cout<<endl;
    merge(a,b,v);
    a.clear();
    b.clear();
}
int main()
{
    int arr[] = {5,1,3,0,4,9,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    vector<int> v(arr,arr+n);
    mergeSort(v);
    for(int i=0;i<v.size();i++)
    cout<<v[i]<<" ";
}