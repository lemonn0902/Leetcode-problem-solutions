// Last updated: 5/2/2026, 11:22:40 PM
1class Solution {
2public:
3    // int f(string text1, string text2,int n,int m,vector<vector<int>>& dp, int idx1,int idx2){
4    //     if(idx1==n || idx2==m){
5    //         return 0;
6    //     }
7    //     if(dp[idx1][idx2]!=-1) return dp[idx1][idx2];
8    //     if(text1[idx1]==text2[idx2]){
9    //         return dp[idx1][idx2]=f(text1,text2,n,m,dp,idx1+1, idx2+1)+1;
10    //     }
11    //     return dp[idx1][idx2] = max(f(text1,text2,n,m,dp,idx1, idx2+1), f(text1,text2,n,m,dp,idx1+1, idx2));
12    // }
13    int longestCommonSubsequence(string text1, string text2) {
14        if(text1==text2) return text1.size();
15        int n =text1.size();
16        int m =text2.size();
17        vector<vector<int>> dp(n+1,vector<int>(m+1,0));
18        //return f(text1, text2, n,m,dp,0,0);
19        for(int i=n-1;i>=0;i--){
20            for(int j=m-1;j>=0;j--){
21                if(text1[i]==text2[j]){
22                    dp[i][j]=1+dp[i+1][j+1];
23                }
24                else dp[i][j]= max(dp[i+1][j], dp[i][j+1]);
25            }
26        }
27        return dp[0][0];
28    }
29};