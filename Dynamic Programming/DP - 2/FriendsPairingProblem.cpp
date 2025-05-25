/*
Give n friends, each friend can be kept single or paired up with some other friend.
Find the number of ways in which the friends can be kept single or be paired up
*/


#include<bits/stdc++.h>
#define ll long long int
using namespace std;

vector<ll> dp;

ll f(ll n){
        if(n == 1) return 1;
        else if(n == 2) return 2;
        if(dp[n] != -1) return dp[n];
        return dp[n] = f(n - 1)  + (n - 1) * f(n - 2);
}

int main(){
        ll n;
        cin>>n;
        dp.clear();
        dp.resize(n + 2 , - 1);
        cout<<f(n);
}