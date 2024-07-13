#include<iostream>
using namespace std;
#include<vector>
int main()
{
    int n;
    cout<<"Enter size of array : ";
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    vector<int> v(n,0);
    for(int i=0;i<n;i++)
    {
        int n1=arr[i];
        if(v[n1]==0)
        v[n1]=1;
        else
        {
            cout<<n1<<" is the duplicate ";
            break;
        }
    }

}