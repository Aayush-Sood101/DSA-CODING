//nearly k sorted array

#include<iostream>
#include<queue>
using namespace std;

void sort(int arr[] , int n , int k){
    priority_queue< int,vector<int>,greater<int> > pq; //minheap
    int idx = 0;
    for(int i = 0 ; i<n ; i++){
        pq.push(arr[i]);
        if(pq.size() > k){
            arr[idx++] = pq.top();
            pq.pop();
        }
    }
    while(pq.size() > 0){
        arr[idx++] = pq.top();
        pq.pop();
    }
}

void display(int arr[] , int n){
    for(int i = 0 ; i<n ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int arr[] = {6 , 5 , 3 , 2 , 8 , 10 , 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    display(arr,n);
    sort(arr  , n , 3);
    display(arr,n);
}