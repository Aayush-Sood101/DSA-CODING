#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> nums = {1,2,3,4,5,6,7,8};
    reverse(nums.begin() , nums.begin() + 4);
    for(int i = 0 ;i<nums.size() ;i++)
    cout<<nums[i]<<" ";
}