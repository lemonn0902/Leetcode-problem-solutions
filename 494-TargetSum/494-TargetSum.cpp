// Last updated: 5/16/2025, 7:08:28 PM
class Solution {
public:
    int f(int index, int target, vector<int>& nums, int current_sum, vector<vector<int>>& dp, int offset){
        if(index<0){
            if(current_sum==target) return 1;
            else return 0;
        }
        if(dp[index][offset+current_sum]!=-1) return dp[index][offset+current_sum];
        int neg= f(index-1, target, nums, current_sum -nums[index], dp, offset);
        int pos = f(index-1, target, nums, current_sum +nums[index], dp, offset);
        return dp[index][offset+current_sum]=neg+pos;
    }
    int findTargetSumWays(vector<int>& nums, int target) {
        int n= nums.size();
        int tot=0;
        for(int i=0;i<n;i++){
            tot+=nums[i];
        }
        int offset= tot;
        vector<vector<int>> dp(n, vector<int>(2*tot+1,-1));
        return f(n-1, target, nums, 0 ,dp, offset);
    }
};