//CSES PROBLEM SET

#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007
using namespace std;

vector<int> dp;

int ftd(int n){
        if(n == 0) return 1;
        else if(n < 0) return 0;
        if(dp[n] != -1) return dp[n];
        int ans = 0;
        for(int i = 1 ; i<=6 ; i++){
                ans = (ans % mod + ftd(n - i) % mod) % mod;
        }

        return dp[n] = ans % mod;
}

int fbu(int n){
        dp[0] = 1;
        for(int i = 1 ; i<=n ; i++){
                int ans = 0;
                for(int j = 1 ; j<=6 ; j++){
                        if((i - j) >= 0)
                        ans = (ans % mod + dp[i - j] % mod) % mod;
                        else
                        break;
                }

                dp[i] = ans % mod;
        }

        return dp[n];
}

int main(){
        int n;
        cin>>n;
        dp.clear();
        dp.resize(n + 1 , -1);
        cout<<fbu(n)<<endl;
}