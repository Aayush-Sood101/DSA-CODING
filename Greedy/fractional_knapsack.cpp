//Knapsack of capacity w
//Each item has a profit and weight
//Taking fractional item is also allowed
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

//custom comparator
bool cmp(pair<int , int> p1 , pair<int , int> p2){
    //pair first -> value second -> weight
    double r1 = (p1.first * 1.0) / (p1.second * 1.0);
    double r2 = (p2.first * 1.0) / (p2.second * 1.0);
    return r1 > r2;
}

double fractional_knapsack(vector<int> profit , vector<int> weights , int w){
    int n = profit.size();
    vector<pair<int , int>> arr;
    for(int i = 0 ; i<n ; i++){
        arr.push_back({profit[i] , weights[i]});
    }
    sort(arr.begin() , arr.end() , cmp);
    double result = 0;
    for(int i = 0 ; i<n ; i++){
        if(arr[i].second <= w){
            result += arr[i].first;
            w -= arr[i].second;
        }
        else{
            result += ((arr[i].first * 1.0) / (arr[i].second * 1.0)) * w;
            w = 0;
            break;
        }
    }
    return result;
}
using namespace std;
int main(){
    vector<int> profit = {60 , 100 , 120};
    vector<int> weights = {10 , 20 , 30};
    int w = 50;
    int n = 3;
    cout<<fractional_knapsack(profit , weights ,w)<<endl;
}