// Last updated: 8/16/2026, 12:58:22 AM
1class Solution {
2public:
3    int f(string& text1, string& text2, int i, int j, vector<vector<int>>& dp){
4        int n=text1.size();
5        int m=text2.size();
6        if(i==n||j==m) return 0;
7        if(dp[i][j]!=-1) return dp[i][j];
8        if(text1[i]==text2[j]) return dp[i][j]=1+f(text1, text2,i+1,j+1,dp);
9        return dp[i][j]=max(f(text1,text2,i+1,j,dp), f(text1,text2,i,j+1,dp));
10    }
11    int longestCommonSubsequence(string text1, string text2) {
12        int n=text1.size();
13        int m=text2.size();
14        vector<vector<int>> dp(n,vector<int>(m,-1));
15        return f(text1, text2, 0,0,dp);
16    }
17};