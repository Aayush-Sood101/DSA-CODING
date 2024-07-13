#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
int main()
{
    int n;
    cout<<"Enter size of array : ";
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    int rsum,sum=0;
    for(int i=0;i<n;i++)
    {
        sum=sum+v[i];
        int j=i+1;
        rsum=(j*(j+1))/2;
        if(sum!=rsum)
        {
            cout<<"Duplicate"<<v[i];
            break;
        }

    }
}