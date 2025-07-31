// Last updated: 7/31/2025, 11:58:56 PM
class Solution {
public:
    int f(int i, vector<int>& count, vector<int>& dp){
        if(i==0) return 0;
        if(i==1) return count[1];
        if(dp[i]!=-1) return dp[i];
        dp[i]=max(f(i-1,count,dp), f(i-2,count,dp)+count[i]);
        return dp[i];
    }
    int deleteAndEarn(vector<int>& nums) {
        int maxNum = *max_element(nums.begin(), nums.end());
        vector<int> count(maxNum + 1, 0);
        for(int num:nums){
            count[num]+=num;
        }
        vector<int> dp(maxNum+1,-1);
        return f(maxNum, count, dp);

    }
};