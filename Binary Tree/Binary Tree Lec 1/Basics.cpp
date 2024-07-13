#include<iostream>
#include<climits>
#include<algorithm>
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
void display(Node* root){
    if(root == NULL) return;
    cout<<root->val<<" ";
    display(root->left);
    display(root->right);
}
int sum1(Node* root){
    if(root == NULL) return 0;
    int leftSum = sum1(root->left);
    int rightSum = sum1(root->right);
    int ans = root->val + leftSum + rightSum;
    return ans;
}
int sum2(Node* root){
    if(root == NULL) return 0;
    return root->val + sum2(root->left) + sum2(root->right);
}
int size1(Node*root){ // No. of Nodes
    if(root == NULL) return 0;
    int leftNodes = size1(root->left);
    int rightNodes = size1(root->right);
    int ans = 1 + leftNodes + rightNodes;
    return ans;
}
int size2(Node* root){
    if(root == NULL) return 0;
    return 1 + size2(root->left) + size2(root->right);
}
int maxInTree1(Node* root){
    //base case
    if(root == NULL) return INT_MIN;
    //kaam + call
    return max(root->val , max(maxInTree1(root->left) , maxInTree1(root->right)));
}
int maxInTree2(Node* root){
    //base case
    if(root == NULL) return INT_MIN;
    int lmax = maxInTree2(root->left);
    int rmax = maxInTree2(root->right);
    int mx = max(root->val , max(lmax , rmax));
    return mx;
}
int product(Node* root){
    if(root == NULL ) return 1;
    return root->val * product(root->left) * product(root->right);
}
int minInTree(Node* root){
    if(root == NULL) return INT_MAX;
    return min(root->val , min(minInTree(root->left) , minInTree(root->right)));
}
int levels1(Node* root){
    if(root == NULL ) return 0;
    return 1 + max(levels1(root->left) , levels1(root->right));
}
int levels2(Node* root){
    if(root == NULL) return 0;
    int leftLevel = levels2(root->left);
    int rightLevel = levels2(root->right);
    int ans = 1 + max(leftLevel , rightLevel);
    return ans;
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
    display(a);
    cout<<endl;
    cout<<sum1(a)<<endl;
    cout<<sum2(a)<<endl;
    cout<<size1(a)<<endl;
    cout<<size2(a)<<endl;
    cout<<maxInTree2(a)<<endl;
    cout<<product(a)<<endl;
    cout<<minInTree(a)<<endl;
    cout<<levels1(a)<<endl;
    cout<<levels2(a)<<endl;
}