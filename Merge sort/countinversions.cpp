#include<iostream>
#include<vector>
using namespace std;
void merge(vector<int> &a,vector<int> &b,vector<int> &v)
{
    int i=0,j=0,k=0;
    while(i<a.size() && j<b.size())
    {
        if(a[i] <=b[j])
        v[k++]=a[i++];
        else
        v[k++]=b[j++];
    }
    if(i==a.size())
    while(j<b.size())
    v[k++]=b[j++];
    if(j==b.size())
    while(i<a.size())
    v[k++]=a[i++];
    }
void mergeSort(vector<int> &v,int &count)
{
    int n=v.size();
    //base case
    if(n==1)
    return;
    //create two arrays
    int n1=n/2;
    int n2=n-n1;
    vector<int> a(n1);
    vector<int> b(n2);
    for(int i=0;i<n1;i++)
    a[i]=v[i];
    for(int i=0;i<n2;i++)
    b[i]=v[i+n1];
    //Recusrsion
    mergeSort(a,count);
    mergeSort(b,count);
    //count inversions
    int i=0,j=0;
    while(i<a.size() && j<b.size())
    {
        if(a[i]>b[j])
        {
            count=count+a.size()-i;
            j++;
        }
        else
        {
            i++;
        }
    }
    //Merging two arrays and sorting them
    merge(a,b,v);
    a.clear();
    b.clear();
}
int main()
{
    int arr[]={4,3,2,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    vector<int> v(arr,arr+n);
    int count=0;
    mergeSort(v,count);
    for(int i=0;i<v.size();i++)
    cout<<v[i]<<" ";
    cout<<endl<<count;
}