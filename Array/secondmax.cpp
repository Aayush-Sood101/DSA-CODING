#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main()
{
    int size;
    cout<<"Enter no. of elements in array : ";
    cin>>size;
    vector<int> v(size);
    cout<<"Enter array elements : ";
    for(int i=0;i<v.size();i++)
    cin>>v[i];
    int max=INT_MIN,smax=INT_MIN;
    for(int i=0;i<v.size();i++)
    {
        int n=v[i];
        if(max<n)
        {
            smax=max;
            max=n;
        }
        else if(smax<n)
        smax=n;
    }
    cout<<"Second maximum : "<<smax;
}