// Last updated: 5/22/2025, 10:33:34 PM
class Solution {
public:
//memoization: 
    // int f(int i, int j, string& s, vector<vector<int>>& dp){
    //     if(i>=j){
    //         return 0;
    //     }
    //     if(dp[i][j]!=-1) return dp[i][j];
    //     if(s[i]==s[j]){
    //         return 0+f(i+1,j-1,s,dp);
    //     }
    //     else
    //     return 1+min(f(i+1, j, s,dp), f(i,j-1,s,dp));
    // }
    int minInsertions(string s) {
        int n=s.size();
        vector<vector<int>> dp(n, vector<int>(n,0));
        for(int len=2;len<=n;len++){
            for(int i=0;i<=n-len;i++){
                int j=i+len-1;
                if (s[i] == s[j])
                    dp[i][j] = dp[i + 1][j - 1];
                else
                    dp[i][j] = 1 + min(dp[i + 1][j], dp[i][j - 1]);
            }
        }
        // return f(0,n-1,s,dp);
        return dp[0][n-1];
    }
    
};