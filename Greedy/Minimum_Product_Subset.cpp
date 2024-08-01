/*
Minimum Product Subset: 
Can have positive negatives or zeroes
*/
#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;

int minProduct(vector<int> &arr){
    int n = arr.size();
    int cnt_neg = 0 , cnt_pos = 0;
    bool isOne = false;
    int neg_prod = 1;
    int pos_prod = 1;
    int largestNeg = INT_MIN;
    for(int i = 0 ; i<n ; i++){
        if(arr[i] == 0)
        isOne = true;
        else if(arr[i] < 0){
            cnt_neg++;
            neg_prod *= arr[i];
            largestNeg = max(largestNeg , arr[i]);
        }
        else{
            cnt_pos++;
            pos_prod *= arr[i];
        }
    }
    if(cnt_neg == 0){
        if(isOne)
        return 0;
        else
        return arr[0];
    }
    else{
        if(cnt_neg % 2 != 0){
            //odd
            return neg_prod * pos_prod;
        }
        else{
            //even
            return (neg_prod * pos_prod) / largestNeg; 
        }
    }
}
int main(){
    vector<int> v = {-4 , - 3 , -2 , -1 , 0 , 1,  2 , 3 ,4 };
    cout<<minProduct(v)<<endl;
}