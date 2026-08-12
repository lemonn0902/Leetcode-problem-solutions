// Last updated: 8/12/2026, 1:28:58 PM
1class Solution {
2public:
3    bool f(vector<int>& nums, int target, vector<vector<int>>& dp, int idx) {
4
5        int n = nums.size();
6        if (target == 0)
7            return true;
8        if (idx >= n || target < 0)
9            return false;
10        if (dp[idx][target] != -1)
11            return dp[idx][target];
12        bool notake = f(nums, target, dp, idx + 1);
13        bool take = false;
14        if (nums[idx] <= target) {
15            take = f(nums, target - nums[idx], dp, idx + 1);
16        }
17        return dp[idx][target] = (take || notake);
18    }
19
20    bool canPartition(vector<int>& nums) {
21        int tot = 0;
22        for (int x : nums)
23            tot += x;
24        if (tot % 2 != 0)
25            return false;
26        int target = tot / 2;
27        int n = nums.size();
28        vector<vector<int>> dp(n, vector<int>(target + 1, -1));
29        return f(nums, target, dp, 0);
30    }
31};