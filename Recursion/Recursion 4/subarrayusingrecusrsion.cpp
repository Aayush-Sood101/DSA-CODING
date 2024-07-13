//MY CODE
#include<iostream>
#include<vector>
using namespace std;
void helper(vector<int> &nums,vector<int> v,int idx,int vidx)
{
    //base call
    if(idx==nums.size())
    {
        for(int i=0;i<v.size();i++)
        cout<<v[i];
        cout<<endl;
        return;
    }
    //exclude
    helper(nums,v,idx+1,vidx);
    //include OR exclude
    int num1=nums[idx];
    if(idx==0) //include
    {
        v.push_back(num1);
        helper(nums,v,idx+1,vidx+1);
    }
    else
    {
        int num2=nums[idx-1];
        if(vidx==0)
        {
            v.push_back(num1);
            helper(nums,v,idx+1,vidx+1);
        }
        else if(num2==v[vidx-1]) //include
        {
            v.push_back(num1);
            helper(nums,v,idx+1,vidx+1);
        }
        else //exclude
        return;
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
    helper(nums,v,0,0);
}