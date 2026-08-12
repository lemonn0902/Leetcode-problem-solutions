// Last updated: 8/12/2026, 2:06:29 PM
1class Solution {
2public:
3    int f(int idx,vector<int>& nums, int target,vector<vector<int>>& dp,int n,int sum, int offset){
4        if(idx==n){
5            if(sum==target) return 1;
6            else return 0;
7        }
8        if(dp[idx][sum+offset]!=-1) return dp[idx][sum+offset];
9        int plus=f(idx+1,nums,target,dp,n,sum+nums[idx],offset);
10        int minus=f(idx+1,nums,target,dp,n,sum-nums[idx],offset);
11        return dp[idx][sum+offset]=plus+minus;
12    }
13    int findTargetSumWays(vector<int>& nums, int target) {
14        int n=nums.size();
15        int tot=0;
16        for(int n:nums) tot+=n;
17        int offset=tot;
18        vector<vector<int>> dp(n,vector<int>(2*tot+1,-1));
19        return f(0,nums,target,dp,n,0,offset);
20    }
21};