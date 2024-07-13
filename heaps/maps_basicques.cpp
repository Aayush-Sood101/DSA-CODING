#include <iostream>
#include <queue>
using namespace std;

int kthSmallest(int arr[], int n, int k){ // using max heap
    priority_queue<int> pq;
    for (int i = 0; i < n; i++){
        pq.push(arr[i]);
        if (pq.size() > k)
            pq.pop();
    }
    return pq.top();
}

int kthLargest(int arr[], int n, int k){
    priority_queue<int, vector<int>, greater<int>> pq;
    for (int i = 0; i < n; i++){
        pq.push(arr[i]);
        if (pq.size() > k)
            pq.pop();
    }
    return pq.top();
}

int main(){
    int arr[] = {10, 20, -4, 6, 18, 2, 105, 118};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << kthSmallest(arr, n, 3) << endl;
}