// Last updated: 8/7/2025, 12:55:57 AM
class Solution {
public:
    int f(vector<int>& nums, int target, int index, vector<vector<int>>& dp,int offset){
        if (target + offset < 0 || target + offset >= dp[0].size()) return 0;

        if(index==0){
            if (nums[0] == 0 && target == 0) return 2; // +0 and -0 both valid
    if (target == nums[0] || target == -nums[0]) return 1;
    return 0;
            
        }
        if(dp[index][target+offset]!=-1) return dp[index][target+offset];
        int neg=f(nums, target-nums[index],index-1,dp,offset);
        int pos=f(nums,target+nums[index],index-1,dp,offset);
        return dp[index][target+offset]=neg+pos;
    }
    int findTargetSumWays(vector<int>& nums, int target) {
        int n=nums.size();
        int offset=0;
        int sum=0;
        for(int i=0;i<n;i++) sum+=nums[i];
        if (abs(target) > sum) return 0;
        offset=sum;
        vector<vector<int>> dp(n,vector<int>(2*sum+1,-1));
        return f(nums,target,n-1,dp,offset);
    }
};