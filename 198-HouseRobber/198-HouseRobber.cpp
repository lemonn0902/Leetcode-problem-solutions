// Last updated: 3/28/2026, 11:19:15 PM
1class Solution {
2public:
3    int f(vector<int>& nums, int index,vector<int>& dp ){
4        if(index==0){
5            return nums[0];
6        }
7        if(index==1) return max(nums[0],nums[1]);
8        if(dp[index]!=-1) return dp[index];
9        //rob house
10        int p=f(nums,index-2,dp)+nums[index];
11        //dont rob
12        int q=f(nums,index-1,dp);
13        dp[index]=max(p,q);
14        return dp[index];
15
16    }
17    int rob(vector<int>& nums) {
18        vector<int> dp(nums.size(),-1);
19        return f(nums, nums.size()-1,dp);
20    }
21};