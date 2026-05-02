// Last updated: 5/2/2026, 11:15:19 PM
1class Solution {
2public:
3    // memoization:
4    //  int f(int i, int j, string &text1, string &text2, vector<vector<int>>&
5    //  dp){
6    //      if(i == 0 || j == 0) return 0;
7    //      if(dp[i][j] != -1) return dp[i][j];
8    //      if(text1[i-1] == text2[j-1])
9    //          return dp[i][j] = 1 + f(i-1, j-1, text1, text2, dp);
10    //      return dp[i][j] = max(f(i-1, j, text1, text2, dp), f(i, j-1, text1,
11    //      text2, dp));
12    //  }
13
14    int longestCommonSubsequence(string text1, string text2) {
15        int n = text1.size(), m = text2.size();
16        vector<vector<int>> dp(n + 1, vector<int>(m + 1, -1));
17        for (int j = 0; j <= m; j++)
18            dp[0][j] = 0;
19        for (int i = 0; i <= n; i++)
20            dp[i][0] = 0;
21        for (int i = 1; i <= n; i++) {
22            for (int j = 1; j <= m; j++) {
23                if (text1[i - 1] == text2[j - 1])
24                    dp[i][j] = 1 + dp[i - 1][j - 1];
25                else
26                    dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
27            }
28        }
29        return dp[n][m];
30    }
31};
32