// Last updated: 5/20/2025, 12:48:38 AM
class Solution {
public:
    // int f(int i, int j, string &text1, string &text2, vector<vector<int>>& dp){
    //     if(i == 0 || j == 0) return 0;
    //     if(dp[i][j] != -1) return dp[i][j];
    //     if(text1[i-1] == text2[j-1])
    //         return dp[i][j] = 1 + f(i-1, j-1, text1, text2, dp);
    //     return dp[i][j] = max(f(i-1, j, text1, text2, dp), f(i, j-1, text1, text2, dp));
    // }
    int longestPalindromeSubseq(string s) {
        string s2= s;
        reverse(s2.begin(), s2.end());
        int n= s.size();
        vector<vector<int>> dp(n+1, vector<int>(n+1, -1));
        for (int j = 0; j <= n; j++)
            dp[0][j] = 0;
        for (int i = 0; i <= n; i++)
            dp[i][0] = 0;
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                if (s[i - 1] == s2[j - 1])
                    dp[i][j] = 1 + dp[i - 1][j - 1];
                else
                    dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }
        return dp[n][n];
        //return f(n, n, s, s2, dp);
    }
};