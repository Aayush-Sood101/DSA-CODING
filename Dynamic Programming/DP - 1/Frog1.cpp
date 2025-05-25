#include<bits/stdc++.h>
#define ll long long int
using namespace std;

vector<int> dp;

int ftd(vector<int> &arr , int idx){
        if(idx == arr.size() - 1) return 0 ;
        else if(idx == arr.size() - 2) return abs(arr[arr.size() - 1] - arr[arr.size() - 2]);
        if(dp[idx] != -1) return dp[idx];
        return dp[idx] = min(abs(arr[idx] - arr[idx + 1]) + ftd(arr , idx + 1) , abs(arr[idx] - arr[idx + 2]) + ftd(arr , idx  +2));
}

int fbu(vector<int> &arr){
        int n = arr.size();
        dp.clear();
        dp.resize(n , -1);
        dp[n - 1] = 0;
        if(n != 1) dp[n - 2] = abs(arr[n - 1] - arr[n - 2]);

        for(int i = n - 3 ; i>=0 ; i--){
                dp[i] = min(abs(arr[i] - arr[i + 1]) + dp[i + 1] , abs(arr[i] - arr[i + 2]) + dp[i + 2]);
        }

        return dp[0];
}

int main(){
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i = 0 ; i<n ; i++)
        cin>>arr[i];

        cout<<fbu(arr)<<endl;
}