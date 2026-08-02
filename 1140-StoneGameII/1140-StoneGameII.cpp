// Last updated: 8/2/2026, 12:47:57 PM
1class Solution {
2public:
3    int f(vector<int>& piles,int i, int M,vector<vector<int>>& dp, int n, vector<int>& suffix){
4        if(i>=n) return 0;
5        if(dp[i][M]!=-1) return dp[i][M];
6        if(2*M>n-i) return suffix[i];
7        int best=0;
8        for(int X=1;X<=2*M;X++){
9            best=max(best, suffix[i]-f(piles,i+X,max(M,X),dp,n,suffix));
10        }
11        return dp[i][M]=best;
12    }
13    int stoneGameII(vector<int>& piles) {
14        int n=piles.size();
15        vector<vector<int>> dp(n+1,vector<int>(n+1,-1));
16        vector<int> suffix(n+1,0);
17        for(int i=n-1;i>=0;i--){
18            suffix[i]=suffix[i+1]+piles[i];
19        }
20        return f(piles, 0, 1 , dp,n, suffix);
21    }
22};