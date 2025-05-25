//CSES PROBLEM SET

#include<bits/stdc++.h>
#define ll long long int
using namespace std;

vector<ll> dp;

ll ftd(vector<ll>& coins , ll x){
        if(x == 0)
        return 0;
        else if(x < 0)
        return INT_MAX;

        ll ans = INT_MAX;
        if(dp[x] != -1) return dp[x];   
        for(int i = 0 ; i<coins.size() ; i++){
                ans = min(ans , ftd(coins , x - coins[i]));
        }

        return dp[x] = (ans == INT_MAX) ?  ans :  1 + ans;
}

ll fbu(vector<ll>& coins , ll x){
        dp[0] = 0;

        for(int i = 1 ; i<=x ; i++){
                ll ans = INT_MAX;
                for(int j = 0 ; j<coins.size() ; j++){
                        if(i - coins[j] >= 0)
                        ans = min(ans , dp[i - coins[j]]);
                }
                
                dp[i] = (ans == INT_MAX) ? ans : 1 + ans;
        }

        return dp[x];
}

int main(){
        ll n , x;
        cin>>n>>x;
        dp.clear();
        dp.resize(x + 1 , -1);
        vector<ll> coins(n);

        for(int i = 0 ; i<n ; i++){
                cin>>coins[i];
        }

        ll ans = fbu(coins , x);

        if(ans != INT_MAX)
        cout<<ans<<endl;
        else
        cout<<"-1"<<endl;
}