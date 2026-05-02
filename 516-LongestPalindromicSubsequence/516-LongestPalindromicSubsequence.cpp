// Last updated: 5/3/2026, 12:07:38 AM
1class Solution {
2public:
3    // int f(string s, int l, int r,int n, vector<vector<int>>& dp){
4    //     if(l>r) return 0;
5    //     if(l==r) return 1;
6    //     if(dp[l][r]!=-1) return dp[l][r];
7    //     if(s[l]==s[r]) return dp[l][r]= 2+f(s,l+1,r-1,n,dp);
8    //     return dp[l][r]=max(f(s,l+1,r,n,dp), f(s,l,r-1,n,dp));
9    // }
10    int longestPalindromeSubseq(string s) {
11        int len=s.size();
12        int l=0, r=len-1;
13        vector<vector<int>> dp(len+1, vector<int>(len+1,0));
14        //return f(s, l,r,len,dp);
15        for(int i=0;i<len;i++) dp[i][i]=1;
16        for(int l=len-1;l>=0;l--){
17            for(int r=l+1;r<len;r++){
18                if (s[l] == s[r]) {
19                    dp[l][r] = 2 + dp[l + 1][r - 1];
20                } else {
21                    dp[l][r] = max(dp[l + 1][r], dp[l][r - 1]);
22                }
23            }
24        }
25        return dp[0][len-1];
26    }
27};