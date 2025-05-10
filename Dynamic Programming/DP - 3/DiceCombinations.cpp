//counting problem
#include<iostream>
#include<vector>
#include<climits>   
#define mod 1000000007
using namespace std;

//top down approach
int f(int n , vector<int> &dp){
    if(n == 0) return 1;
    if(dp[n] != -1) return dp[n];
    int result = 0;
    for(int i = 1 ; i<=6 ; i++){
        if(n - i < 0) break; // breaking
        result = (result % mod + f(n - i , dp) % mod) % mod;
    }
    return dp[n] = result % mod;
}

//bottom up approach
int fbu(int n , vector<int> &dp){
    dp[0] = 1;
    for(int k = 1 ; k<=n ; k++){
        int result = 0;
        for(int i= 1 ; i<=6 ; i++){
            if(k - i < 0) break;
            result  = (result % mod + dp[k - i] % mod) % mod;
        }
        dp[k] = result % mod;
    }
    return dp[n];
}

int main(){
    int n;
    cin>>n;
    vector<int> dp(n + 1 , -1);
    cout<<f(n , dp)<<endl;
}