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
Node* deleteNodePointer(Node* head,Node* t){
    if(head==t){
        head = head->next;
        return head;
    }
    Node* temp = head;
    while(temp->next!=t){
        temp = temp->next;
    }
    temp->next = temp->next->next;
    return head;
}
Node* deleteNodeVal(Node* head,int val){
    if(head->val==val){
        head = head->next;
        return head;
    }
    Node* temp = head;
    while(temp->next->val!=val){
        temp = temp->next;
    }
    temp->next = temp->next->next;
    return head;
}
void display(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp = temp->next;
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
    display(a);
    Node* head = deleteNodeVal(a,30);
    a = head;
    display(a);
}