// Last updated: 5/3/2026, 12:00:14 AM
1class Solution {
2public:
3    // int f(int i, int j, string &text1, string &text2, vector<vector<int>>& dp){
4    //     if(i == 0 || j == 0) return 0;
5    //     if(dp[i][j] != -1) return dp[i][j];
6    //     if(text1[i-1] == text2[j-1])
7    //         return dp[i][j] = 1 + f(i-1, j-1, text1, text2, dp);
8    //     return dp[i][j] = max(f(i-1, j, text1, text2, dp), f(i, j-1, text1, text2, dp));
9    // }
10    int longestPalindromeSubseq(string s) {
11        string s2= s;
12        reverse(s2.begin(), s2.end());
13        int n= s.size();
14        vector<vector<int>> dp(n+1, vector<int>(n+1, -1));
15        for (int j = 0; j <= n; j++)
16            dp[0][j] = 0;
17        for (int i = 0; i <= n; i++)
18            dp[i][0] = 0;
19        for (int i = 1; i <= n; i++) {
20            for (int j = 1; j <= n; j++) {
21                if (s[i - 1] == s2[j - 1])
22                    dp[i][j] = 1 + dp[i - 1][j - 1];
23                else
24                    dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
25            }
26        }
27        return dp[n][n];
28        //return f(n, n, s, s2, dp);
29    }
30};