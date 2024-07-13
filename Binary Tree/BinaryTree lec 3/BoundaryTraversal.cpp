#include<iostream>
#include<queue>
#include<climits>
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
Node* construct(int arr[] , int n){
    queue<Node*> q;
    Node* root = new Node(arr[0]);
    q.push(root);
    int i = 1,j = 2;
    while(q.size() > 0 && i<n){
        Node* temp = q.front();
        q.pop();
        Node* left;
        Node* right;
        if(arr[i] != INT_MIN) left = new Node(arr[i]);
        else  left = NULL;

        if(arr[j] != INT_MIN && j!=n) right = new Node(arr[j]);
        else right = NULL;
        temp->left = left;
        temp->right = right;
        if(left!=NULL)
        q.push(left);
        if(right!=NULL)
        q.push(right);

        i+=2;
        j+=2;
    }
    return root;
}
void leftBoundary(Node* root){
    //base case
    if(root == NULL ) return;
    //case for leaf node
    if(root->left == NULL && root->right == NULL) return;
    cout<<root->val<<" ";
    leftBoundary(root->left);
    if(root->left == NULL)
    leftBoundary(root->right);
}
void leafNode(Node* root){
    //base case
    if(root == NULL ) return;
    //case for leaf node
    if(root->left == NULL && root->right == NULL)
    cout<<root->val<<" ";
    leafNode(root->left);
    leafNode(root->right);
}
void rightBoundary(Node* root){
    //base case
    if(root == NULL ) return;
    //case for leaf node
    if(root->left == NULL && root->right == NULL) return;
    rightBoundary(root->right);
    if(root->right == NULL)
    rightBoundary(root->left);
    cout<<root->val<<" ";
}
void boundary(Node* root){
    leftBoundary(root);
    leafNode(root);
    if(root!=NULL)
    rightBoundary(root->right);
}
int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    int n = sizeof(arr) / sizeof(arr[0]);
    Node* root = construct(arr , n);
    //boundary traversal
    boundary(root);
}