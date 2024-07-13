#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int size;
    cout<<"Enter no. of elements in array : ";
    cin>>size;
    vector<int> arr(size);
    cout<<"Enter array elements : ";
    for(int i=0;i<arr.size();i++)
    cin>>arr[i];
    int x;int c=0;
    cout<<"Enter the value of sum : ";
    cin>>x;
    for(int i=0;i<=arr.size()-3;i++)
    {
        for(int j=i+1;j<=arr.size()-2;j++)
        {
            for(int k=i+2;k<=arr.size()-1;k++)
            if(arr[i]+arr[j]+arr[k]==x)
            c++;
        }
    }
    cout<<"Count : "<<c;
}