#include<iostream>
using namespace std;
class Node{ //User defined data type
public:
    int val;
    Node* next;
    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};
class Stack{
public:
    Node* head;
    Stack(){
        this->head = NULL;
    }
    void push(int val){
        Node* t = new Node(val);
        t->next = head;
        head = t;
    }
    void pop(){
        if(head==NULL){
            cout<<"Stack is empty : ";
            return;
        }
        else{
            head = head->next;
        }
    }
    int top(){
        if(head==NULL){
            cout<<"Stack is empty : ";
            return -1;
        }
        else{
            return head->val;
        }
    }
    int size(){
        if(head==NULL)
        return 0;
        else{
            int n = 0;
            Node* temp = head;
            while(temp!=NULL){
                n++;
                temp = temp->next;
            }
            return n;
        }
    }
    void print(Node* head){
        //base case
        if(head==NULL)
        return;
        //code + recursion
        print(head->next);
        cout<<head->val<<" ";
    }
    void display(){
        Node* temp = head;
        print(temp);
        cout<<endl;
    }
};
int main(){
    Stack st;
    cout<<st.size()<<endl;
    st.push(10);
    st.push(20);
    st.push(30);
    st.display();
    cout<<st.top()<<endl;
    st.pop();
    cout<<st.top()<<endl;
    cout<<st.size()<<endl;
}