//Problem Link:https://leetcode.com/problems/rotate-image/
class Solution {
public:
    void rotate(vector<vector<int>>& m) {
        for(int i=0;i<m.size()-1;i++ ){
            for(int j=i+1;j<m.size();j++){
                swap(m[i][j],m[j][i]);
            }
        }
        for(int i=0;i<m.size();i++){
            reverse(m[i].begin(),m[i].end());
        }
    }
};
