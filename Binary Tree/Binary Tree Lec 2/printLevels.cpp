/*
To print all levels
*/
#include<iostream>
#include<algorithm>
using namespace std;
class Node{
public:
    int val;
    Node* left;
    Node* right;
    Node(int val){
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};
int levels(Node* root){
    if(root == NULL)
    return 0;
    return 1 + max(levels(root->left) , levels(root->right));
}
void printNthLevel(Node* root , int i , int n){
    if(root == NULL)
    return;
    if(i == n){
        cout<<root->val<<" ";
        return;
    }
    printNthLevel(root->left , i + 1 , n);
    printNthLevel(root->right , i+1 , n);
}
void printNthLevelRev(Node* root , int i , int n){
    if(root == NULL)
    return;
    if(i == n){
        cout<<root->val<<" ";
        return;
    }
    printNthLevelRev(root->right , i + 1 , n);
    printNthLevelRev(root->left , i+1 , n);
}
void levelOrder(Node* root){
    int l = levels(root);
    for(int i = 1; i<=l ; i++){
        printNthLevelRev(root , 1 , i);
        cout<<endl;
    }
}
int main(){
    Node* a = new Node(1);
    Node* b = new Node(2);
    Node* c = new Node(3);
    Node* d = new Node(4);
    Node* e = new Node(5);
    Node* f = new Node(6);
    Node* g = new Node(7);
    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    c->right = g;
    levelOrder(a);
}