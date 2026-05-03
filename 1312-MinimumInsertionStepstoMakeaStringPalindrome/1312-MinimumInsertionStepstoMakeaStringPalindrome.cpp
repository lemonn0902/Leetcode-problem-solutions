// Last updated: 5/3/2026, 10:40:26 PM
1class Solution {
2public:
3    int minInsertions(string s) {
4        int n=s.size();
5        vector<vector<int>> dp(n, vector<int>(n,0));
6        for(int l=n-1;l>=0;l--){
7            for(int r=l+1;r<n;r++){
8                if(s[l]==s[r]) dp[l][r]=dp[l+1][r-1];
9                else{
10                    dp[l][r]=min( dp[l+1][r], dp[l][r-1])+1;
11                }
12            }
13        }
14        return dp[0][n-1];
15    }
16};