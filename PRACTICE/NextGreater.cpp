//using Brute force
#include<iostream>
using namespace std;
int main(){
    int arr[] = {4,3,54,3,2,1,5,3,5,3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int ans[n];
    for(int i = 0 ;i<n;i++){
        ans[i] = -1;
        for(int j = i+1;j<n;j++){
            if(arr[j]>arr[i]){
                ans[i] = arr[j];
                break;
            }
        }
    }
    for(int i = 0;i<n;i++)
    cout<<ans[i]<<" ";
}