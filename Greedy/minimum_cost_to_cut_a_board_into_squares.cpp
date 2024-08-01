//https://www.geeksforgeeks.org/minimum-cost-cut-board-squares/

#include<iostream>
#include<vector>
#include<algorithm>
#define ll long long int
using namespace std;

bool cmp(ll x1 , ll x2){
    return x1 > x2;
}
ll minCostToBreak(ll m , ll n , vector<ll> &x , vector<ll> &y){
    sort(x.begin() , x.end() , cmp);
    sort(y.begin() , y.end() , cmp);
    int hz = 1 , vr = 1; // piecles in horizontal or vertical direction cut
    int h = 0 , v = 0;
    ll ans = 0;
    while(h < x.size() && v < y.size()){
        if(y[v] > x[h]){
            ans += y[v] * vr;
            hz++;
            h++;
        }
        else{
            ans += x[h] * hz;
            vr++;
            v++;
        }
    }
    while(h < x.size()){
        ans += x[h] * hz;
        vr++;
        v++;
    }
    while(v < y.size()){
        ans += y[v] * vr;
        hz++;
        h++;
    }
    return ans;
}
int main(){
    int m  , n;
    cin>>m>>n;
    vector<ll> x , y;
    for(int i = 0 ; i<m - 1 ; i++){
        int val;
        cin>>val;
        x.push_back(val);
    }
    for(int i = 0 ; i<n - 1 ; i++){
        int val;
        cin>>val;
        y.push_back(val);
    }
    cout<<minCostToBreak(m , n , x , y);
}