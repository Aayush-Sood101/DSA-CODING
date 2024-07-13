#include<iostream>
using namespace std;
class Node{ //user defined data type
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
class DoublyLL{ //user defined data structure
public:
    Node* head;
    Node* tail;
    int size;
    DoublyLL(){
        head = tail = NULL;
        size = 0;
    }
    void insertAtTail(int val){
        Node* temp = new Node(val);
        if(size==0){
            head = tail =temp;
        }
        else{
            tail->next = temp;
            temp->prev = tail; //EXTRA
            tail = temp;
        }
        size++;
    }
    void insertAtHead(int val){
        Node* temp = new Node(val);
        if(size==0){
            head = tail = temp;
        }
        else{
            temp->next = head;
            head->prev = temp; //extra
            head = temp;
        }
        size++;
    }
    void insertAtIdx(int idx,int val){
        if(idx<0 && idx>size){
            cout<<" INVALID !! ";
        }
        else if(idx==0){
            insertAtHead(val);
        }
        else if(idx==size){
            insertAtTail(val);
        }
        else{
            Node* t = new Node(val);
            Node* temp = head;
            for(int  i =1 ; i<=idx-1 ; i++)
            temp = temp->next;
            t->next  = temp->next;
            temp->next = t;
            t->prev = temp; //extra
            t->next->prev = t; //extra
            size++;
        }
    }
    int getAtIdx(int idx){
        if(idx<0 || idx>=size){
            cout<<"INVALID !! ";
            return 0;
        }
        else if(idx==0){
            return head->val;
        }
        else if(idx==size-1){
            return tail->val;
        }
        else{
            Node* temp = head;
            for(int i = 1 ;i<=idx;i++)
            temp = temp->next;
            return temp->val;
        }
    }
    void deleteAtHead(){
        if(size==0){
            cout<<"List is Empty ";
        }
        else if(size==1){
            head = tail = NULL;
            size--;
        }
        else{
            head = head->next;
            head->prev = NULL; //extra
            tail = NULL;
            size--;
        }
    }
    void deleteAtTail(){
        if(size==0){
            cout<<"List is Empty ";
        }
        else if(size==1){
            head = tail = NULL;
            size--;
        }
        else{ //whole is extra
            Node* temp = tail->prev;
            temp->next = NULL;
            tail = temp;
            size--;
        }
    }
    void deleteAtIdx(int idx){
        if(idx<0 || idx>=size){
            cout<<"INVALID IDX ";
        }
        else if(idx==0){
            deleteAtHead();
        }
        else if(idx==size-1){
            deleteAtTail();
        }
        else{
            Node* temp = head;
            for(int i = 1 ; i<=idx-1;i++)
            temp = temp->next;
            temp->next  =temp->next->next;
            temp->next->prev = temp; //extra;
            size--;
        }
    }
    void display(){
        Node* temp = head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }
    //extra function
    void displayReverse(){
        Node* temp = tail;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp = temp->prev;
        }
        cout<<endl;
    }
};
int main(){
    DoublyLL dll;
    dll.insertAtTail(10);
    dll.insertAtTail(20);
    dll.insertAtTail(30);
    dll.insertAtTail(40);
    dll.insertAtTail(50);
    dll.display();
    dll.insertAtHead(0);
    dll.display();
    dll.deleteAtTail();
    dll.display();
    dll.displayReverse();
}