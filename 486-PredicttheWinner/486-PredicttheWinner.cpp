// Last updated: 8/14/2025, 8:55:54 PM
class Solution {
public:
    bool check(int ans, int total){
        if(ans>= total-ans) return true;
        return false;
    }
    int f(vector<int>& nums, int total, int i, int j, vector<vector<int>>& dp){
        if(i>j) return 0;
        if(dp[i][j]!=-1) return dp[i][j];
        return dp[i][j]=total-min(f(nums, total-nums[i], i+1, j,dp), f(nums,total-nums[j],i,j-1,dp));

        

    }
    bool predictTheWinner(vector<int>& nums) {
        int n=nums.size();
        int total=0;
        for(int x:nums) total+=x;
        vector<vector<int>> dp(n,vector<int>(n,-1));
        int ans= f(nums, total,0, n-1,dp);
        return check(ans,total);
    }
};