#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int size;
    cout<<"Enter no. of elements in array : ";
    cin>>size;
    vector<int> v(size);
    cout<<"Enter array elements : ";
    for(int i=0;i<v.size();i++)
    cin>>v[i];\
    int max1=v[0];
    int max2=v[0];
    int max3=v[0];
    for(int i=0;i<v.size();i++)
    {
        int n=v[i];
        if(max1<n)
        {
            max3=max2;
            max2=max1;
            max1=n;
        }
        else if(max2<n)
        {
            max3=max2;
            max2=n;
        }
        else if(max3<n)
        {
            max3=n;
        }
    }
    cout<<"Maximum : "<<max1;
    cout<<" Second Maximum : "<<max2;
    cout<<"Third Maximum : "<<max3;
}
