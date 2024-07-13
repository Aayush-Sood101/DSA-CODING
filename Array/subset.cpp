#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main()
{
    int size1;
    cout<<"Enter no. of elements in array : ";
    cin>>size1;
    vector<int> arr1(size1);
    cout<<"Enter array elements : ";
    for(int i=0;i<arr1.size();i++)
    cin>>arr1[i];
    int size2;
    cout<<"Enter no. of elements in subset array : ";
    cin>>size2;
    vector<int> arr2(size2);
    cout<<"Enter subset array elements : ";
    for(int i=0;i<arr2.size();i++)
    cin>>arr2[i];bool flag;
    for(int i=0;i<size2;i++)
    {
        flag=false;
        for(int j=0;j<size1;j++)
        {
            if(arr2[i]==arr1[j])
            {
                flag=true;
                break;
            }
        }
        if(flag==false)
        {
            cout<<"NOT SUBSET";
            abort();
        }
    }
    cout<<"IS A SUBSET !!!";
}