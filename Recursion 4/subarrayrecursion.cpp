//MY CODE
#include<iostream>
#include<vector>
using namespace std;
void helper(vector<int> &nums,vector<int> v,int idx)
{
    if(idx==nums.size())
    {
        for(int i=0;i<v.size();i++)
        cout<<v[i];
        cout<<endl;
        return;
    }
    //exclude
    helper(nums,v,idx+1);
    //include
    //if initially array is empty
    if(v.size()==0)
    {
        v.push_back(nums[idx]);
        helper(nums,v,idx+1);
    }
    //to only call id nums ka idx-1 is equal to vector ka last
    else
    {
        if(nums[idx-1]==v[v.size()-1])
        {
            v.push_back(nums[idx]);
            helper(nums,v,idx+1);
        }
    }
}
int main()
{
    cout<<"Enter the number of elements in array : ";
    int n;
    cin>>n;
    vector<int> nums(n);
    cout<<"Enter array elements : ";
    for(int i=0;i<n;i++)
    cin>>nums[i];
    vector<int> v;
    helper(nums,v,0);
}