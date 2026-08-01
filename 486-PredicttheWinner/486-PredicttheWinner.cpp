// Last updated: 8/2/2026, 12:12:21 AM
1class Solution {
2public:
3    bool check(int ans, int total){
4        if(ans>= total-ans) return true;
5        return false;
6    }
7    int f(vector<int>& nums, int total, int i, int j, vector<vector<int>>& dp){
8        if(i>j) return 0;
9        if(dp[i][j]!=-1) return dp[i][j];
10        return dp[i][j]=total-min(f(nums, total-nums[i], i+1, j,dp), f(nums,total-nums[j],i,j-1,dp));
11
12        
13
14    }
15    bool predictTheWinner(vector<int>& nums) {
16        int n=nums.size();
17        int total=0;
18        for(int x:nums) total+=x;
19        vector<vector<int>> dp(n,vector<int>(n,-1));
20        int ans= f(nums, total,0, n-1,dp);
21        return check(ans,total);
22    }
23};