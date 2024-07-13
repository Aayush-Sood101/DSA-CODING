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
    vector<int> isVisited(n,0);int k=0;
    for(int i=0;i<n;i++)
    {
        int min=INT_MAX;int idx;
        for(int j=0;j<n;j++)
        {
            if(v[j]<min && isVisited[j]==0)
            {
                min=v[j];
                idx=j;
            }
        }
        v[idx]=k;
        isVisited[idx]=1;
        k++;
    }
    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }
}