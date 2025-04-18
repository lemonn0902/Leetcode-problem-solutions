// Last updated: 4/18/2025, 11:31:22 PM
class Solution {
public:
    int climbStairs(int n) {
        if (n == 0 || n == 1) return 1;
        
        vector<int> dp(n + 1);
        dp[0] = 1;
        dp[1] = 1;

        for (int i = 2; i <= n; ++i) {
            dp[i] = dp[i - 1] + dp[i - 2];
        }

        return dp[n];
    }
};
