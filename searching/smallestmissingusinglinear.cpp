#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cout<<"Enter size of array : ";
    cin>>n;
    vector <int> v(n);
    cout<<"Enter array elements : ";
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    for(int i=0;i<n;i++)
    {
        if(v[i]==i)
        continue;
        else
        {
            cout<<"Smallest missing : "<<i;
            break;
        }
    }
}