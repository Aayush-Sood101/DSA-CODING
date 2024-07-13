/*Given an array return previous greater element array
If there is no previous greater -1 should be assigned
*/
#include<iostream>
#include<stack>
using namespace std;
int main(){
    int arr[] = {4,1,2,5,3,6,8,6,3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int ans[n];
    ans[0] = -1;
    stack<int> st;
    st.push(arr[0]);
    for(int i = 1;i<n;i++){
        //pop
        while(st.size()>0 && st.top()<=arr[i])
        st.pop();
        //ans
        if(st.size()==0)
        ans[i] = -1;
        else
        ans[i] = st.top();
        //push
        st.push(arr[i]);
    }
    for(int i = 0;i<n;i++)
    cout<<arr[i]<<" ";
    cout<<endl;
    for(int i = 0;i<n;i++)
    cout<<ans[i]<<" ";
    cout<<endl;
}