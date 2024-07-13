#include<iostream>
#include<vector>
#include<climits>
#include<stack>
using namespace std;
vector<vector<int>> heights(vector<vector<char>>& matrix){
    int rows = matrix.size();
    int columns = matrix[0].size();
    vector<vector<int>> ans(rows,vector<int> (columns));
    for(int j = 0;j<columns;j++){
        int height = 0;
        for(int i = 0;i<rows;i++){
            if(matrix[i][j] == '1')
            height++;
            else
            height = 0;
            ans[i][j] = height;
        }
    }
    return ans;
}
int maxAreaHistgramRow(vector<vector<int>> heights , int i){
    int n = heights[0].size();
    int nsIdx[n];
    stack<int> st;
    nsIdx[n-1] = n;
    st.push(n-1);
    for(int j = n-2;j>=0;j--){
        //pop
        while(st.size()>0 && heights[i][st.top()] >= heights[i][j])
        st.pop();
        //ans
        if(st.size() == 0)
        nsIdx[j] = n;
        else
        nsIdx[j] = st.top();
        //push
        st.push(j);
    }
    for(int i = 0;i<n;i++)
    cout<<nsIdx[i]<<" ";
    cout<<endl;
    while(st.size() > 0)
    st.pop();
    int psIdx[n];
    psIdx[0] = -1;
    st.push(0);
    for(int j = 1;j<n;j++){
        //pop
        while(st.size() > 0 && heights[i][st.top()] >= heights[i][j])
        st.pop();
        //ans
        if(st.size() == 0)
        psIdx[j] = -1;
        else
        psIdx[j] = st.top();
        //push
        st.push(j);
    }
    for(int i = 0;i<n;i++)
    cout<<psIdx[i]<<" ";
    cout<<endl;
    int maxArea = INT_MIN;
    for(int j = 0; j < n ; j++){
        int area = (nsIdx[j] - psIdx[j] - 1) * heights[i][j];
        if(area > maxArea)
        maxArea = area;
    }
    return maxArea;
}
int maximalRectangle(vector<vector<char>>& matrix) {
    vector<vector <int>> h = heights(matrix);
    int n = matrix.size();
    int maxArea = INT_MIN;
    for(int  i = 0; i<n ; i++){
        int area = maxAreaHistgramRow(h , i);
        if(area > maxArea)
        maxArea = area;
    }
    return maxArea;
}
int main(){
    vector<vector<char>> matrix;
    vector<char> ch1 = {'1' , '0' ,'1' ,'0','0'};
    vector<char> ch2 = {'1' , '0' ,'1' ,'1','1'};
    vector<char> ch3 = {'1' , '1' ,'1' ,'1','1'};
    vector<char> ch4 = {'1' , '0' ,'0' ,'1','0'};
    matrix.push_back(ch1);
    matrix.push_back(ch2);
    matrix.push_back(ch3);
    matrix.push_back(ch4);
    cout<<maximalRectangle(matrix);
}