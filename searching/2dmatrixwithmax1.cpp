#include<iostream>
#include<vector>
using namespace std;
int main()
{
    cout<<"Enter no .of roes and colums ";
    int m,n;
    cin>>m>>n;
    vector< vector<int>> v(m , vector<int> (n));
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>v[i][j];
        }
    }
    int row=-1;
    int maxo=0;
    for(int i=0;i<m;i++)
    {
        int lo=0,hi=n-1;int ans=-1;
        while(lo<=hi)
        {
            int mid= lo + (hi-lo)/2;
            if(v[i][mid]==1)
            {
                if(mid==0)
                {
                    ans=mid;
                    break;
                }
                else if(v[i][mid-1]!=1)
                {
                    ans=mid;
                    break;
                }
                else
                hi=mid-1;
            }
            else if(v[i][mid]==0)
            lo=mid+1;
        }
        if(ans==-1)
        continue;
        int noo=n-ans;
        if(noo>maxo)
        {
            maxo=noo;
            row=i;
        }
    }
    if(row!=-1)
    cout<<"Row with maximum ones is : "<<row;
    else
    cout<<"No row has one ";
}