/*Given an array return next greater element array
If there is no Next greater -1 should be assigned
*/
//Space Complexity : O(n)
//Time Complexity : O(2*n)
//Max n elements are pushed so max n elements can be popped
#include<iostream>
#include<stack>
using namespace std;
int main(){
    int arr[] = {4,1,2,5,3,6,8,6,3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int ans[n];
    ans[n-1] = -1;
    stack<int> st;
    st.push(arr[n-1]);
    for(int i = n-2;i>=0;i--){
        //POP
        while(st.size()!=0 && st.top()<=arr[i])
        st.pop();
        //ANS
        if(st.size()!=0)
        ans[i] = st.top();
        else
        ans[i] = -1;
        //PUSH
        st.push(arr[i]);
    }
    for(int i = 0;i<n;i++)
    cout<<arr[i]<<" ";
    cout<<endl;
    for(int i = 0;i<n;i++)
    cout<<ans[i]<<" ";
}