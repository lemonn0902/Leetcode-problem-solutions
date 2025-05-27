// Last updated: 5/28/2025, 12:43:43 AM
class Solution {
public:
    // bool f(string& s, string& p, int i,int j, vector<vector<int>>& dp){
    //     if(i==0 && j==0 ) return true;
    //     if(j==0 ) return false;
    //     if(i==0){
    //         //check if rest in p are '*'s
    //         for(int k=0;k<j;k++){
    //             if(p[k]!='*') return false;
    //         }
    //         return true;

    //     }
    //     if(dp[i][j]!=-1) return dp[i][j];
    //     if(s[i-1]==p[j-1]) 
    //     return f(s, p, i-1,j-1, dp);
    //     if(p[j-1]=='?')
    //     return f(s, p, i-1,j-1, dp);
    //     if(p[j-1]=='*'){
    //         return f(s,p,i-1,j, dp)|| f(s,p,i,j-1, dp);
    //     }
    //     else 
    //     return false;
    // }
    bool isMatch(string s, string p) {
        int m= s.size();
        int n= p.size();
        vector<vector<bool>> dp(m+1, vector<bool>(n+1,false));
        dp[0][0]= true;
        for(int j=1;j<=n;j++){
            if(p[j-1]=='*') 
            dp[0][j]= dp[0][j-1];
        }
        for (int i = 1; i <= m; ++i) {
            for (int j = 1; j <= n; ++j) {
                if (s[i - 1] == p[j - 1] || p[j - 1] == '?') {
                    dp[i][j] = dp[i - 1][j - 1];
                } else if (p[j - 1] == '*') {
                    dp[i][j] = dp[i - 1][j] || dp[i][j - 1];
                } else {
                    dp[i][j] = false;
                }
            }
        }
        return dp[m][n];
    }
};