/* stack is to be reversed given that 
reversed stack should be in original stack only
*/
#include<iostream>
#include<stack>
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
int main(){
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    Node* c = new Node(-1);
    Node* tempC = c;
    while(st.size()>0){
        Node* t = new Node(st.top());
        tempC->next = t;
        tempC = tempC->next;
        st.pop();
    }
    tempC = c->next;
    while(tempC!=NULL){
        st.push(tempC->val);
        tempC = tempC->next;
    }
}