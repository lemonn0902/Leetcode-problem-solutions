// Last updated: 3/28/2026, 11:22:29 PM
1class Solution {
2public:
3    // int f(vector<int>& nums, int n, vector<int>& dp){
4    //     //base case
5    //     if(n==0) return nums[0];
6    //     if(n==1) return max(nums[1],nums[0]);
7    //     if(dp[n]!=-1) return dp[n];
8    //     //rob
9    //     int rob=nums[n]+f(nums, n-2,dp);
10    //     //not rob
11    //     int not_rob=f(nums, n-1,dp);
12    //     return dp[n]=max(rob, not_rob);
13    // }
14    int rob(vector<int>& nums) {
15        int n=nums.size();
16        if(n==1) return nums[0];
17        vector<int> dp(n,0);
18        dp[0]=nums[0];
19        dp[1]= max(nums[0], nums[1]);
20        for(int i=2;i<n;i++){
21            int a=nums[i]+dp[i-2];
22            int b=dp[i-1];
23            dp[i]=max(a,b);
24        }
25        return dp[n-1];
26    }
27};