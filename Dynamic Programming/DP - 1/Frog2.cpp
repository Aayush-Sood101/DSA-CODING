//at coder

#include<bits/stdc++.h>
#define ll long long int
using namespace std;


vector<int> dp;
int ftd(vector<int>& arr , int idx , int k){
        if(idx == 0)
        return 0;
        if(dp[idx] != -1) return dp[idx];
        
        int ans = INT_MAX;
        for(int j = 1 ; j<= k ; j++){
                if(idx - j >= 0)
                ans = min(ans , abs(arr[idx] - arr[idx - j]) + ftd(arr , idx - j , k));
        }
        return dp[idx] = ans;
}

int fbu(vector<int> &arr , int k){
        int n = arr.size();
        dp.clear();
        dp.resize(n , -1);
        dp[0] = 0;
        for(int i = 1 ; i<n ; i++){
                int ans = INT_MAX;
                for(int j = 1 ; j<= k ; j++){
                        if(i - j >= 0)
                        ans = min(ans , abs(arr[i] - arr[i - j]) + dp[i - j]);
                        else
                        break;
                }
                dp[i] = ans;
        }

        return dp[n - 1];
}


int main(){
        int n , k;
        cin>>n>>k;

        vector<int> arr(n);
        for(int i = 0 ; i<n ; i++)
        cin>>arr[i];

        dp.clear();
        dp.resize(n + 2 , -1);
        cout<<fbu(arr , k)<<endl;
}