//Input: {100,80,60,70,60,75,85}
//Output: {1,1,1,2,1,4,6}
#include<iostream>
#include<stack>
using namespace std;
int main(){
    int arr[] = {100,80,60,81,70,60,75,85};
    int n = sizeof(arr) / sizeof(arr[0]);
    int ans[n];
    ans[0] = 1;
    stack<int> st;
    st.push(0);
    for(int i = 1;i<n;i++){
        //popping
        while(st.size()>0 && arr[st.top()]<=arr[i])
        st.pop();
        //ans
        if(st.size()==0)
        ans[i] = i+1;
        else
        ans[i] = i - st.top();
        //push
        st.push(i);
    }
    for(int i = 0;i<n;i++)
    cout<<arr[i]<<" ";
    cout<<endl;
    for(int i = 0;i<n;i++)
    cout<<ans[i]<<" ";
    cout<<endl;
}