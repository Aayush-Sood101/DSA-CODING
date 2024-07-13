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
    cin>>v[i];bool flag=true;
    for(int i=0;i<v.size()-1;i++)
    {
        if(v[i]>v[i+1])
        {
            flag=false;
            break;
        }
    }
    if(flag==false)
    cout<<"Array is not sorted ";
    else
    cout<<"Array is sorted ";
}
