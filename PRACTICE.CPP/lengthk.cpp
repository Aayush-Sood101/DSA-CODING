#include<iostream>
#include<vector>
using namespace std;
void helper(vector<int> &nums,vector<int> v,int idx,int k)
{
    //base case
    if(idx==nums.size())
    {
        if(v.size()==k)
        {
            for(int i=0;i<v.size();i++)
            cout<<v[i];
            cout<<endl;
        }
        
        return;
    }
    //recursive calls
    //exclude
    helper(nums,v,idx+1,k);
    //include
    v.push_back(nums[idx]);
    helper(nums,v,idx+1,k);
}
int main()
{
    cout<<"Enter no. of natural numbers : ";
    int n;
    cin>>n;
    cout<<"Enter the value of k : ";
    int k;
    cin>>k;
    vector<int> nums(n);
    for(int i=0;i<n;i++)
    nums[i]=i+1;
    vector<int> v;
    helper(nums,v,0,k);
}