/**
 * Reduce to zero by removing one digit from a number
 */

#include<iostream>
#include<vector>
#include<climits>
using namespace std;

vector<int> getDigits(int n){
    vector<int> ans;
    while(n > 0){
        int rem = n % 10;
        if(rem != 0)
        ans.push_back(rem);
        n /= 10;
    }
    return ans;
}

int f(int n , vector<int> &dp){
    if(n == 0) return 0;
    if(n <= 9) return 1;
    vector<int> d = getDigits(n);
    if(dp[n] != -1) return dp[n];
    int result = INT_MAX;
    for(int i = 0 ; i<d.size() ; i++){
        result = min(result , f(n - d[i] , dp));
    }
    return dp[n] = 1 + result;
}

int fbu(int num , vector<int> &dp){
    dp[0] = 0;
    if(num <= 9) return 1;
    for(int i = 1 ; i<=9 ; i++) dp[i] = 1;
    for(int n = 10 ; n<=num ; n++){
        vector<int> d = getDigits(n);
        int result = INT_MAX;
        for(int i = 0 ; i<d.size() ; i++){
            result = min(dp[n] , dp[n - d[i]]);
        }
        dp[n] = 1 + result;
    }
    return dp[num];
}

int main(){
    int n;
    cin>>n;
    vector<int> dp(n + 2 , -1);
    cout<<f(n , dp);
}