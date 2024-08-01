#include<iostream>
#include<vector>
#include<queue>
using namespace std;
class Node{
public:
    int val;
    Node* left;
    Node* right;
    Node(int val){
        this->val = val;
        left = right = NULL;
    }
};
int sizeOfTree(Node* root){
    if(root == NULL) return 0;
    return 1 + sizeOfTree(root->left) + sizeOfTree(root->right);
}
bool isMax(Node* root){
    //base case for root node
    if(root == NULL )
    return true;
    //base case for leaf node
    if(root->left == NULL && root->right == NULL) 
    return true;

    //conditions for checking
    if(root->left != NULL && root->val < root->left->val) return false;
    if(root->right != NULL && root->val < root->right->val) return false;

    //recursive case
    return isMax(root->left) && isMax(root->right);
}
//checking for complete binary tree
bool isCBT(Node* root){
    queue<Node*> q;
    q.push(root);
    // bool flag = false;
    // while(!q.empty()){
    //     Node* temp = q.front();
    //     q.pop();
    //     if(temp->left){
    //         if(flag) return false;
    //         q.push(temp->left);
    //     }
    //     else flag = true;
    //     if(temp->right){
    //         if(flag) return false;
    //         q.push(temp->right);
    //     }
    //     else flag = true;
    // }

    int size = sizeOfTree(root);
    int count  = 0;
    while(count < size){
        Node* temp = q.front();
        q.pop();
        count++;
        if(temp != NULL){
            q.push(temp->left);
            q.push(temp->right);
        }
    }
    while(q.size() > 0){
        Node* temp = q.front();
        q.pop();
        if(temp != NULL) return false;
    }
    return true;
}
int main(){
    Node* a = new Node(20);
    Node* b = new Node(5);
    Node* c = new Node(4);
    Node* d = new Node(1);
    Node* e = new Node(2);
    Node* f = NULL;
    Node* g = new Node(1);
    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    c->right = g;

    //solution
    if(isCBT(a) && isMax(a)) cout<<"Tree is a max heap";
    else cout<<"Tree is not a max heap";
}