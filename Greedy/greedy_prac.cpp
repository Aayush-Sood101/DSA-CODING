//sorting on the basis of x end
//find non overlapping
//total - non overlapping
bool cmp(vector<int> &a , vector<int> &b){
    return a[1] < b[1];
}
class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        int n = points.size();
        sort(points.begin() , points.end() , cmp);
        int x_end = points[0][1];
        int ans = 0;
        for(int i = 1 ; i<n ; i++){
            if(x_end > points[i][1]){
                ans++;
            }
            else{
                x_end = points[i][1];
            }
        }
        return n - ans;
    }
}
