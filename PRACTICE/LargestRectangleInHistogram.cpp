#include<iostream>
#include<stack>
#include<vector>
#include<climits>
using namespace std;
int LargestRectangle(vector<int> &heights){
    int n = heights.size();
    //calculating previous span 
    int prev[n];
    prev[0] = 0;
    stack<int> st;
    st.push(0);
    for(int i=1;i<n;i++){
        //pop
        while(st.size()>0 && heights[st.top()]>=heights[i])
        st.pop();
        //ans
        if(st.size()==0)
        prev[i] = i ;
        else
        prev[i] = i - st.top() -1 ;
        //push
        st.push(i);
    }
    for(int i= 0;i<n;i++)
    cout<<prev[i]<<" ";
    cout<<endl;
    //emptying the stack
    while(st.size()>0)
    st.pop();
    //calculating next span
    int next[n];
    next[n-1] = 1;
    st.push(n-1);
    for(int i = n-2;i>=0;i--){
        //pop
        while(st.size()>0 && heights[st.top()]>=heights[i])
        st.pop();
        //ans
        if(st.size()==0)
        next[i] = n - i ;
        else
        next[i] = st.top() - i;
        //push
        st.push(i);
    }
    for(int i= 0;i<n;i++)
    cout<<next[i]<<" ";
    cout<<endl;
    //calculatin area
    int area[n];
    for(int i = 0;i<n;i++){
        area[i] = (prev[i] +next[i]) * heights[i];
    }
    //calculating max area
    int max = INT_MIN;
    for(int i = 0;i<n;i++){
        if(area[i]>max)
        max = area[i];
    }
    return max;
}
int main(){
    //given vector
    vector<int> heights = {2,1,5,6,2,3};
    cout<<LargestRectangle(heights);
}