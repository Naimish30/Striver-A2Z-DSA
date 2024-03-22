//Problem Link: https://leetcode.com/problems/set-matrix-zeroes/
class Solution {
public:
    void setZeroes(vector<vector<int>>& m) {
        int r=m.size();
        int c=m[0].size();
        vector<int>rv(r,0);
        vector<int>cv(c,0);
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(m[i][j]==0){
                    rv[i]=1;
                    cv[j]=1;
                }
            }
        }
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(rv[i]==1 || cv[j]==1){
                    m[i][j]=0;
                }
            }
        }
    }
};
