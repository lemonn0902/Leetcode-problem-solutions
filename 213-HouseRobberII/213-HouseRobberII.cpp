// Last updated: 3/28/2026, 11:44:11 PM
1class Solution {
2public:
3    int f(vector<int>& nums,int i,vector<int>& dp, int s){
4        if(i < s) return 0;
5        if(i == s) return nums[i];
6        if(dp[i]!=-1) return dp[i];
7        //rob
8        int rob=nums[i]+f(nums,i-2,dp,s);
9        //dont rob
10        int skip=f(nums,i-1,dp,s);
11        return dp[i]=max(rob,skip);
12
13    }
14    int rob(vector<int>& nums) {
15        int n=nums.size();
16        if(n==1) return nums[0];
17        vector<int> dp1(n,-1);
18        vector<int> dp2(n,-1);
19        int ans1=f(nums,n-2,dp1,0);
20        int ans2=f(nums,n-1,dp2,1);
21        return max(ans1, ans2);
22    }
23};