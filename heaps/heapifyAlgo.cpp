#include<iostream>
using namespace std;
void display(int arr[] , int n){
    for(int i = 1 ; i<n ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void heapify(int i , int arr[] ,int n){
    while(true){
        int left = 2 * i , right = 2 * i + 1;
        //left child is outside
        if(left >= n ) break;
        //only right child is outside
        if(right >= n){
            if(arr[i] > arr[left]){
                swap(arr[i] , arr[left]);
                i = left;
            }
            break;
        }
        //maybe to be swapped with left
        if(arr[left] < arr[right]){
            if(arr[i] > arr[left]){
                swap(arr[i] , arr[left]);
                i = left;
            }
            else break;
        }
        //mayble to be swapped with right
        else{
            if(arr[i] > arr[right]){
                swap(arr[i] , arr[right]);
                i = right;
            }
            else break;
        }
    }
}
int main(){
    int arr[] = {-1, 10, 2, 14, 11, 1, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    display(arr , n);
    for(int i = n / 2 ; i>=1 ; i--){
        heapify(i , arr , n );
    }
    display(arr , n);
}