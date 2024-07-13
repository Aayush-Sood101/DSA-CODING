#include<iostream>
#include<vector>
using namespace std;
int main()
{
    cout<<"Enter no. of words : ";
    int n;
    cin>>n;
    vector<string> v(n);
    cout<<"Enter integers : ";
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    int max=stoi(v[0]);
    for(int i=0;i<n;i++)
    {
        int x=stoi(v[i]);
        if(x>max)
        max=x;
    }
    cout<<"Maximum Integer : "<<max;
}
