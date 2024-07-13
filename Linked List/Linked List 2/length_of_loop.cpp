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
int length_loop(Node* head){
    Node* slow = head;
    Node* fast = head;
    while(fast!=NULL || fast->next!=NULL){
        slow = slow->next;
        fast = fast->next->next;
        if(slow==fast)
        break;
    }
    Node* t = head;
    while(t!=slow){
        t = t->next;
        slow = slow->next;
    }
    Node* address = slow->next;
    int size  = 1;
    slow = slow->next;
    while(slow->next!=address){
        slow = slow->next;
        size++;
    }
    return size;

}
int main(){
    Node* a =  new Node(10);
    Node* b =  new Node(10);
    Node* c =  new Node(10);
    Node* d =  new Node(10);
    Node* e =  new Node(10);
    Node* f =  new Node(10);
    a->next  = b;
    b->next  = c;
    c->next  = d;
    d->next  = e;
    e->next = f;
    f->next = b;
    cout<<"LENGTH OF LOOP : "<<length_loop(a);
}