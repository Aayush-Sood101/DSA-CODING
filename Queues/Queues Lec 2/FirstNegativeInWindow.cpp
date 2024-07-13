#include<iostream>
#include<queue>
using namespace std;
void display(int arr[] , int n){
    for(int i = 0 ; i<n ; i++)
    cout<<arr[i]<<" ";
    cout<<endl;
}
int main(){
    int arr[] = {1 , -1 , 2 , -2 , 3 , 4 , -5 , -10};
    int k = 3;
    int n = sizeof(arr) / sizeof(arr[0]);
    int ans[n - k + 1];
    queue<int> q;
    for(int i = 0 ; i<k ; i++){
        if(arr[i] < 0)
        q.push(arr[i]);
    }
    ans[0] = q.front();
    int i = 1 , j = k;
    while(j <n){
        if(arr[i - 1] == q.front())
        q.pop();
        if(arr[j] < 0)
        q.push(arr[j]);
        ans[i] = q.front();
        i++;j++;
    }
    display(arr , n);
    display(ans , n - k + 1);
}