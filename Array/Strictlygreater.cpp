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
    cin>>v[i];
    int c=0;
    cout<<"Enter value of x : ";
    int x;
    cin>>x;
    for(int i=0;i<v.size();i++)
    {
        if(v[i]>x)
        c++;
    }
    cout<<"Strictly greater than x : "<<c;
}