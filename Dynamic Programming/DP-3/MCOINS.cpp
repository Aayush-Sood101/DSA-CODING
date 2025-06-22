//SPOJ - ONLINE JUDGE
//MCOINS

#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
        int K , L , m;
        cin>>K>>L>>m;
        vector<int> inputs;
        int max_input = INT_MIN;
        while(m--){
                int n;
                cin>>n;
                
                inputs.push_back(n);
                if(n > max_input)
                max_input = n;
        }

        vector<int> dp(max_input + 1);
        dp[1] = 1;
        for(int i = 2 ; i<max_input+1 ; i++){
                if(i == K || i == L)
                dp[i] = 1;
                else
                dp[i] = !(dp[i - 1] && ((i - K) >= 1 ? dp[i - K] : 1) && ((i - L) >= 1 ? dp[i - L] : 1));
        }

        for(auto ele : inputs){
                if(dp[ele] == 1)
                cout<<"A";
                else
                cout<<"B";
        }
}