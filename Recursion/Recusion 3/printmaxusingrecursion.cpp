#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int printmax(vector<int> &v,int i, int n)
{
    if(i==v.size())
    return INT_MIN;
    return max(v[i],printmax(v,i+1,n));
}
int main()
{
    cout<<"Enter size of array : ";
    int n;cin>>n;
    vector<int> v(n);
    cout<<"Enter array elements : ";
    for(int i=0;i<v.size();i++)
    cin>>v[i];
    int i=0;
    cout<<printmax(v,i,n);
}