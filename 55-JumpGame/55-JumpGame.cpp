// Last updated: 7/9/2025, 5:31:56 PM
class Solution {
public:
    bool check(vector<int>& nums, int index, vector<int>& dp){
        if(index==nums.size()-1)
        return true;
        if(dp[index]!=-1) return dp[index];
        int furthestjump= min(index + nums[index], (int)nums.size() - 1);
        for(int next=index+1;next<=furthestjump;next++){
            if(check(nums,next, dp)){
                dp[index]=1;
                return true;
            }
        }
        dp[index]=0;
        return false;


    }
    bool canJump(vector<int>& nums) {
        int n=nums.size();
        vector<int> dp(n,-1);
        return check(nums, 0, dp);
    }
};