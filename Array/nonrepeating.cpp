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
    cin>>v[i];int k=-1;bool flag=false;
    for(int i=0;i<v.size();i++)
    {
        for(int j=i+1;j<v.size();j++)
        {
            if(v[i]==v[j])
            {
                flag=true;k=i;
                break;
            }
        }
        if(flag==true)
        break;
    }
    if(k!=-1)
    cout<<"Repeated : "<<v[k];
    else
    cout<<"404";
}
