//Problem Link : https://leetcode.com/problems/pascals-triangle/description/
class Solution {
private:

 vector<int>Row(int rows){
    int ans=1;
    vector<int>row_ans;
    row_ans.push_back(1);
    for(int i=1;i<rows;i++){
        ans*=(rows-i);
        ans/=(i);
        row_ans.push_back(ans);
    }
    return row_ans;
 }

public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>ans;
        for(int i=0;i<numRows;i++){
            ans.push_back(Row(i+1));
        }
       return ans;
    }
};
