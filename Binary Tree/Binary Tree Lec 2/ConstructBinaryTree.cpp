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

        if(j !=n && arr[j] != INT_MIN) right = new Node(arr[j]);
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
void bfsDisplay(Node* root){
    queue<Node*> q;
    q.push(root);
    while(q.size()>0){
        Node* temp = q.front();
        q.pop();
        cout<<temp->val<<" ";
        if(temp->left!= NULL)
        q.push(temp->left);
        if(temp->right != NULL)
        q.push(temp->right);
    }
}
int main(){
    int arr[] = {1,2,3,4,5,INT_MIN,6,INT_MIN,INT_MIN,7,8,9};
    int n = sizeof(arr) / sizeof(arr[0]);
    Node* root = construct(arr , n);
    bfsDisplay(root);
}