// Problem Link: https://leetcode.com/problems/subarray-sum-equals-k/
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        map<int,int>prefix_sum;
        prefix_sum[0]=1;
        int cnt=0;
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            int remove=sum-k;
            cnt+=prefix_sum[remove];
            prefix_sum[sum]+=1;
        }
        return cnt;
    }
};
