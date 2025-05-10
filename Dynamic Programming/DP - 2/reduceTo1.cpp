/*
Reduce n to 1 by:
1. Decrease by 1
2. Divide by 3 if divisible by 3
3. Divide by 2 if divisible by 2

Find minimum steps required for this process
*/


#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;
int helper(int n , vector<int> &dp){
    if(n == 1) return 0;
    if(n == 2 || n == 3) return 1;
    if(dp[n] != -1) return dp[n];
    return dp[n] = 1 + min(helper(n - 1 , dp) , min((n % 2 == 0) ? helper(n / 2 , dp) : INT_MAX , (n % 3 == 0) ? helper(n / 3 , dp) : INT_MAX));
}
int main(){
    int n = 10;
    vector<int> dp(n + 2 , -1);
    cout<<helper(n , dp);
}