#include<iostream>
#include<queue>
#include<climits>
using namespace std;
class Node{ //data type 
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
    while(q.size() > 0 && i < n){
        Node* temp = q.front();
        q.pop();
        Node* l;
        Node* r;
        if(arr[i] != INT_MIN) l = new Node(arr[i]);
        else l = NULL;
        if(arr[j] != INT_MIN && j<n) r = new Node(arr[j]);
        else r = NULL;
        temp->left = l;
        temp->right = r;
        if(l != NULL) q.push(l);
        if(r != NULL) q.push(r);

        i += 2;
        j += 2;
    }
    return root;
}
void bfsDisplay(Node* root){
    queue<Node*> q;
    q.push(root);
    while(q.size() > 0){
        Node* temp = q.front();
        q.pop();
        cout<<temp->val<<" ";
        if(temp->left != NULL)
        q.push(temp->left);
        if(temp->right != NULL)
        q.push(temp->right);
    }
    cout<<endl;
}
int main(){
    int arr[] = {1,2,3,4,INT_MIN,5,6,7,8,9,10,11};
    int n = sizeof(arr) / sizeof(arr[0]);
    Node* root = construct(arr , n);
    bfsDisplay(root);
}