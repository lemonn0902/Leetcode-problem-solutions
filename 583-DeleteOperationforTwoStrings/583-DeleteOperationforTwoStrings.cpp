// Last updated: 5/4/2026, 10:00:27 PM
1class Solution {
2public:
3    int minDistance(string word1, string word2) {
4        int n = word1.size();
5        int m = word2.size();
6        vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));
7        for (int j = 0; j <= m; j++) {
8            dp[n][j] = m - j;
9        }
10        for (int i = 0; i <= n; i++) {
11            dp[i][m] = n - i;
12        }
13        for (int i = n - 1; i >= 0; i--) {
14            for (int j = m - 1; j >= 0; j--) {
15
16                if (word1[i] == word2[j]) {
17                    dp[i][j] = dp[i+1][j+1];
18                } else {
19                    dp[i][j] = 1 + min(dp[i+1][j], dp[i][j+1]);
20                }
21            }
22        }
23        return dp[0][0];
24    }
25};