#include<iostream>
#include<vector>
using namespace std;
int main()
{
    cout<<"Enter the number of elements in array : ";
    int n;
    cin>>n;
    vector<int> v(n);
    cout<<"Enter array elements : ";
    for(int i=0;i<n;i++)
    cin>>v[i];
    for(int i=0;i<n;i++) // start of sub array
    {
        for(int k=i;k<n;k++)//no of iterations for each stating index
        {
            for(int j=i;j<=k;j++)//printing array elements
            cout<<v[j];
            cout<<endl;
        }
    }
}