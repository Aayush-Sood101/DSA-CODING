#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
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
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1-i;j++)
        {
            if(v[j]>v[j+1])
            {
                swap(v[j],v[j+1]);
            }
        }
    }
    int num1=0,num2=0;
    for(int i=0;i<n;i++)
    {
        int d=v[i];
        if(i%2==0)
        {
            num1=num1*10+d;
        }
        else
        {
            num2=num2*10+d;
        }
    }
    cout<<"LOWEST POSSIBLE SUM : "<<num1+num2;
}