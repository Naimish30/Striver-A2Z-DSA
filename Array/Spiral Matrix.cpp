//Problem Link: https://leetcode.com/problems/spiral-matrix/description/
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& m) {
        int r=m.size();
        int c=m[0].size();
        int top=0;
        int left=0;
        int right=c-1;
        int bottom=r-1;
        vector<int> ans;
        int cnt=0;
        while(cnt!=(r*c)){
            for(int i=left;i<=right;i++){
                ans.push_back(m[top][i]);
                cnt++;
            }
            top++;
            for(int i=top;i<=bottom;i++){
                ans.push_back(m[i][right]);
                cnt++;
            }
            right--;
            if(top<=bottom){
            for(int i=right;i>=left;i--){
                ans.push_back(m[bottom][i]);
                cnt++;
            }
            bottom--;
            }
            if(left<=right){
            for(int i=bottom;i>=top;i--){
                ans.push_back(m[i][left]);
                cnt++;
            }
            left++;
            }
        }
        return ans;
    }
};
