#include<iostream>
using namespace std;
class Queue{
public:
    int arr[5];
    int f;
    int b;
    Queue(){
        f = b = 0;
    }
    void push(int val){
        if(b==5){
            cout<<"Queue is full"<<endl;
            return;
        }
        arr[b++] = val;
    }
    void pop(){
        if(f==5){
            cout<<"Queue is empty "<<endl;
            return;
        }
        f++;
    }
    int front(){
        if((b-f) == 0){
            cout<<"Queue is empty "<<endl;
            return -1;
        }
        return arr[f];
    }
    int back(){
        if((b-f) == 0){
            cout<<"Queue is empty "<<endl;
            return -1;
        }
        return arr[b-1];
    }
    int size(){
        return b - f;
    }
    bool empty(){
        if(b-f == 0)
        return true;
        else
        return false;
    }
    void display(){
        for(int i = f;i < b;i++)
        cout<<arr[i]<<" ";
        cout<<endl;
    }
};
int main(){
    Queue q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.display();
    q.pop();
    q.display();
    cout<<q.front()<<endl;
    cout<<q.back()<<endl;
    q.push(40);
    cout<<q.size()<<endl;
    q.display();
}