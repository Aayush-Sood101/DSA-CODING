#include<iostream>
using namespace std;
class Node{
public:
    int val;
    Node* next;
    Node* prev;
    Node(int val){
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
class Deque{
public:
    Node* head;
    Node* tail;
    int s;
    Deque(){
        head = tail = NULL;
        s = 0;
    }
    void pushFront(int val){
        Node* t = new Node(val);
        if(s==0){
            head = tail  =  t ;
        }
        else{
            t->next = head;
            head->prev = t;
            head = t;
        }
        s++;
    }
    void pushBack(int val){
        Node* t = new Node(val);
         if(s==0){
            head = tail  =  t ;
        }
        else{
            t->prev = tail;
            tail->next = t;
            tail = t;
        }
        s++;
    }
    void popFront(){
        if(s==0){
            cout<<"UNDERFLOW!!"<<endl;
            return;
        }
        else if(s==1){
            head = tail = NULL;
            s--;
        }
        else{
            head = head->next;
            head->prev = NULL;
            s--;
        }
    }
    void popBack(){
        if(s==0){
            cout<<"UNDERFLOW!!"<<endl;
            return;
        }
        else if(s == 1){
            head = tail = NULL;
            s--;
        }
        else{
            tail = tail->prev;
            tail->next = NULL;
            s--;
        }
    }
    int front(){
        if(s==0){
            cout<<"UNDERFLOW!!";
            return -1;
        }
        return head->val;
    }
    int back(){
        if(s==0){
            cout<<"UNDERFLOW!!";
            return -1;
        }
        return tail->val;
    }
    int size(){
        return s;
    }
    void display(){
        Node* t = head;
        while(t){
            cout<<t->val<<" ";
            t = t->next;
        }
        cout<<endl;
    }
};
int main(){
    Deque q;
    q.pushBack(1);
    q.pushBack(2);
    q.popBack();
    q.popBack();
    q.pushFront(1);
    q.display();
}