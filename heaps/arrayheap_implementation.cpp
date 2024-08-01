#include<iostream>
using namespace std;
class MinHeap{
public:
    int arr[50];
    int idx;

    MinHeap(){
        idx = 1;
    }

    //first cell is kept emply of the array
    int top(){
        return arr[1];
    }

    void push(int x){
        arr[idx] = x;
        int i = idx;
        idx++;

        //swapping of i with parent(i / 2)
        while(i > 1){
            if(arr[i] < arr[i / 2])
            swap(arr[i] , arr[i / 2]);
            else
            break;
            i /= 2;
        }
    }
    
    void pop(){
        //popping
        idx--;

        //last element is put at the top
        arr[1] = arr[idx];

        //rearragement
        int i = 1;
        while(true){
            int left = 2 * i , right = 2 * i + 1;
            //left child is outside
            if(left > idx - 1) break;
            //only right child is outside
            if(right > idx - 1){
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


    int size(){
        return idx - 1;
    }

    void display(){
        for(int i = 1 ; i<=idx-1 ; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};
int main(){
    MinHeap pq;
    pq.push(10);
    pq.push(11);
    pq.push(12);
    pq.push(13);
    pq.push(14);
    pq.push(3);
    cout<<pq.top()<<endl;
    cout<<pq.size()<<endl;
}