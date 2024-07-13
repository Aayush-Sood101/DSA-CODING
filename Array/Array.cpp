#include<iostream>
#include<vector>
using namespace std;
void display(vector<int> a)
{
    for(int i=0;i<a.size();i++)
    {
        cout<<a[i]<<" ";
    }
}
int main()
{
    int size;
    cout<<"Enter size of vector ";
    cin>>size;
    cout<<"Enter elements of vector ";
    vector<int> v;
    for(int i=0;i<size;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    vector<int> vr(size);
    for(int i=0;i<size;i++)
    {
        vr[size-1-i]=v[i];
    }
    display(vr);
}