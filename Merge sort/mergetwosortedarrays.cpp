#include<iostream>
#include<vector>
using namespace std;
void Merge( vector<int> &a,vector<int> &b,vector<int> &v)
{
    int i=0;
    int j=0;
    int k=0;
    while(i<a.size() && j<b.size())
    {
        if(a[i]<b[j])
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
int main()
{
    cout<<"Enter the size of two vectors : ";
    int n1,n2;
    cin>>n1>>n2;
    cout<<"Enter elements of array A : ";
    vector<int> a(n1);
    for(int i=0;i<n1;i++)
    cin>>a[i];
    cout<<"Enter elements of array B : ";
    vector<int> b(n2);
    for(int i=0;i<n2;i++)
    cin>>b[i];
    vector<int> v(n1+n2);
    Merge(a,b,v);
    for(int i=0;i<v.size();i++)
    cout<<v[i]<<" ";
}