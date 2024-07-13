#include<iostream>
using namespace std;
#include<vector>
int main()
{
    cout<<"Enter the size of array ";
    int n;cin>>n;
    cout<<"Enter array elements ";
    vector<int> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    float k;int kmin,kmax;
    for(int i=0;i<n-1;i++)
    {
        kmin=0,kmax=0;
        int a1=v[i];
        int a2=v[i+1];
        k=(a1+a2)/2.0;
        if(i==0)
        {
            if(a2-a1>=0)
            {
                kmin=(int)k;
                kmax=(int)(k);
            }
            else
            {
                kmax=(int)(k+1);
                kmin=(int)(k+1);
            }
        }
        else if(a2-a1>=0)
        {
            kmin=(int)k;
        }
        else
        {
            kmax=(int)(k+1);
        }
        if(kmax<kmin)
        {
            cout<<"-1";
            return 0;
        }
    }
    cout<<"Range of k : ["<<kmin<<","<<kmax<<"]";
}