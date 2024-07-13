/*Ques to print all increasing subsequences of length k for first n natural  numbers */
#include<iostream>
#include<vector>
using namespace std;
void helper(vector<int> &v,vector<int> v1,int idx ,int k)
{
    if(idx==v.size())
    {
        if(v1.size()==k)
        {
            for(int i=0;i<v1.size();i++)
            cout<<v1[i];
            cout<<endl;
        }
        return;
    }
    //exclude
    helper(v,v1,idx+1,k);
    //include
    v1.push_back(v[idx]);
    helper(v,v1,idx+1,k);
    
}
int main()
{
    cout<<"Enter no. of first natural numbers : ";
    int n;
    cin>>n;
    cout<<"Enter the length k : ";
    int k;
    cin>>k;
    vector<int> v(n);
    for(int i=0;i<n;i++)
    v[i]=i+1;
    vector<int> v1;
    helper(v,v1,0,k);
}