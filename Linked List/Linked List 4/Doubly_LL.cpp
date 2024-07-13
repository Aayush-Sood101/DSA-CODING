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
void display(Node* head){
    Node* temp = head;
    while(temp){
        cout<<temp->val<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
void displayRecReverse(Node* head){
    //base case
    if(head==NULL)
    return;
    //recursion
    displayRecReverse(head->next);
    //code
    cout<<head->val<<" ";
}
void displayReverse(Node* tail){
    Node* temp = tail;
    while(temp){
        cout<<temp->val<<" ";
        temp = temp->prev;
    }
    cout<<endl;
}
void displayFromAnyNode(Node* n){
    Node* temp = n;
    while(temp->prev!=NULL){
        temp = temp->prev;
    }
    Node* head = temp;
    while(head){
        cout<<head->val<<" ";
        head = head->next;
    }
    cout<<endl;
}
int main(){
    Node* a = new Node(10);
    Node* b = new Node(20);
    Node* c = new Node(30);
    Node* d = new Node(40);
    Node* e = new Node(50);
    a->next = b; 
    b->next = c;
    c->next = d;
    d->next = e;
    e->prev = d;
    d->prev = c;
    c->prev = b;
    b->prev = a;
    displayFromAnyNode(c);
}