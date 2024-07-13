#include<iostream>
using namespace std;
#include<vector>
void helper(vector<int> &nums , int n,int &sum)
{
    if(n==1)
    return;
    vector<int> v(n-1);
    for(int i=0;i<n-1;i++)
    {
        v[i]=(nums[i]+nums[i+1])%10;
    }
    cout<<endl;
    sum= v[0];
    helper(v,n-1,sum);
}
int main()
{
    
    vector<int> nums={1,2,3,4,5};
    int n = nums.size();
    int sum = nums[0];
    helper(nums,n,sum);
    cout<<sum;
}