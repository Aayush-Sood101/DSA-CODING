#include<iostream>
using namespace std;
int main()
{
    int nums[] = {1,2,6,4,7,5,7,5,4,3};
    int n=sizeof(nums)/sizeof(nums[0]);
    int left = 2;
    int right = 5;
    int prefix[n];
    prefix[0] = nums[0];
    for(int i=1;i<n;i++)
    prefix[i] = prefix[i-1] + nums[i];
    cout<<prefix[right] - prefix[left-1];
}