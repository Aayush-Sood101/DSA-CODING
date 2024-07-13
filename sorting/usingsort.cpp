#include<iostream>
#include<climits>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    cout<<"Enter size of array : ";
    int n;cin>>n;
    cout<<"Enter array elements ";
    vector<int> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    vector<int> copy=v;int k=0;
    sort(copy.begin(),copy.end());
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(copy[i]==v[j])
            {
                v[j]=k;
                break;
            }
        }
        k++;
    }
    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }
}