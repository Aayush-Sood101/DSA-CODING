//CSES PROBLEM SET

#include<bits/stdc++.h>
#define ll long long int
using namespace std;

vector<int> dp;

vector<int> getDigits(int n){
        vector<int> digits;

        while(n > 0){
                int rem = n % 10;
                if(rem != 0)
                digits.push_back(rem);
                n /= 10;
        }
        
        return digits;
}

int ftd(int n){
        if(n == 0) return 0;

        vector<int> digits = getDigits(n);
        int ans = INT_MAX;
        if(dp[n] != -1) return dp[n];
        for(int i = 0 ; i<digits.size() ; i++){
                ans = min(ans , ftd(n - digits[i]));
        }

        return dp[n] = 1 + ans;
}

int fbu(int n){
        dp[0] = 0;

        for(int i = 1 ; i<=n ; i++){
                vector<int> digits = getDigits(i);
                int ans = INT_MAX;
                for(int j = 0 ; j<digits.size() ; j++){
                        ans = min(ans , dp[i - digits[j]]);
                }

                dp[i] = 1 + ans;
        }

        return dp[n];
}


int main(){
        int n;
        cin>>n;
        dp.clear();
        dp.resize(n + 1, -1);
        cout<<fbu(n)<<endl;
}