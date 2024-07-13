#include<iostream>
using namespace std;
class Node{
public:
    int val;
    Node* next;
    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};
class LinkedList{
public:
    Node* head;
    int size;
    LinkedList(){
        head = NULL;
        size = 0;
    }
    void insertAtTail(int val){
        Node* temp = new Node(val);
        if(size==0){
            head = temp;
        }
        else if(size>0){
            Node* t = head;
            for(int i=1;i<=size-1;i++)
            t=t->next;
            t->next = temp;
        }
        size++;
    }
    void insertAtHead(int val){
        Node* temp = new Node(val);
        if(size==0){
            head = temp;
        }
        else if(size>0){
            temp->next = head;
            head = temp;
        }
        size++;
    }
    void insertAtIdx(int idx,int val){
        if(idx<0 || idx>size){
            cout<<"NOT POSSIBLE !! ";
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
            for(int i = 1;i<=idx-1;i++){
                temp = temp->next;
            }
            t->next = temp->next;
            temp->next = t;
            size++;
        }
    }
    int getElement(int idx){
        if(idx<0 || idx>=size){
            cout<<"NOT POSSIBLE ";
            cout<<endl;
            return 0;
        }
        else if(idx==1){
            return head->val;
        }
        else if(idx==size-1){
            Node* temp = head;
            for(int i=1;i<=size-1;i++)
            temp = temp->next;
            return temp->val;
        }
        else{
            Node* temp = head;
            for(int i=1;i<=idx;i++)
            temp = temp->next;
            return temp->val;
        }
    }
    void deleteAtHead(){
        if(size==0){
            cout<<"List is empty : ";
            return ; 
        }
        else if(size==1){
            head = NULL;
        }
        else{
            head = head->next;
        }
        size--;
    }
    void deleteAtTail(){
        if(size==0){
            cout<<"List is empty : ";
            return;
        }
        else if(size==1){
            head = NULL;
        }
        else{
            Node* temp = head;
            for(int i=1;i<=size-2;i++)
            temp = temp->next;
            temp->next = NULL;
        }
        size--;
    }
    void deleteAtIdx(int idx){
        if(idx<0 || idx>=size){
            cout<<"NOT POSSIBLE : ";
            return;
        }
        else if(idx==0){
            deleteAtHead();
        }
        else if(idx==size-1){
            deleteAtTail();
        }
        else{
            Node* temp = head;
            for(int i = 1;i<idx;i++)
            temp = temp->next;
            temp->next = temp->next->next;
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
};
int main(){
    LinkedList ll;
    ll.insertAtTail(30);
    ll.insertAtHead(20);
    ll.insertAtTail(40);
    ll.insertAtHead(10);
    ll.display();
    ll.insertAtIdx(1,50);
    ll.display();
    cout<<ll.getElement(3)<<endl;
    ll.deleteAtHead();
    ll.display();
    ll.deleteAtTail();
    ll.display();
    ll.deleteAtIdx(1);
    ll.display();
}