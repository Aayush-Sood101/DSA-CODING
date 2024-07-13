#include<iostream>
#include<vector>
using namespace std;
int numberOfSubarrays(vector<int>& nums, int k)
{
    int n = nums.size();
    int i=0,j=0,odd=0,count=0,ans=0;
    while(j<n)
    {
        if(nums[j]%2==0)
        {
            j++;
        }
        else
        {
            count=0;
            if(odd<k)
            {
                j++;
                odd++;
            }
            else
            {
                count++;
                while(nums[i]%2==0)
                {
                    count++;
                    i++;
                }
                odd--;
                i++;
            }
        }
        ans+=count;
    }
    return ans;
}
int main()
{
    vector<int> v={2,2,2,1,2,2,1,2,2,2};
    int k = 2;
    cout<<numberOfSubarrays(v,k);
}