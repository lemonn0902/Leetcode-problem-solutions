// Last updated: 5/20/2025, 12:46:48 AM
class Solution {
public:
    int f(int i, int j, string &text1, string &text2, vector<vector<int>>& dp){
        if(i == 0 || j == 0) return 0;
        if(dp[i][j] != -1) return dp[i][j];
        if(text1[i-1] == text2[j-1])
            return dp[i][j] = 1 + f(i-1, j-1, text1, text2, dp);
        return dp[i][j] = max(f(i-1, j, text1, text2, dp), f(i, j-1, text1, text2, dp));
    }
    int longestPalindromeSubseq(string s) {
        string s2= s;
        reverse(s2.begin(), s2.end());
        int n= s.size();
        vector<vector<int>> dp(n+1, vector<int>(n+1, -1));
        return f(n, n, s, s2, dp);
    }
};