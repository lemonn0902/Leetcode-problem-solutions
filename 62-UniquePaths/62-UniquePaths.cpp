// Last updated: 8/5/2025, 8:17:40 PM
class Solution {
public:
    // int f(int i , int j, vector<vector<int>>& dp){
    //     //base case:
    //     if(i==0 && j==0)//reached top
    //     return 1;
    //     if(i<0 || j<0) //out of bounds of the matrix cell
    //     return 0; 
    //     if(dp[i][j]!=-1) return dp[i][j];
    //     int left= f(i, j-1,dp);
    //     int right= f(i-1, j,dp);
    //     return dp[i][j]=left+right;
    // }
    int uniquePaths(int m, int n) {
        vector<vector<int>> dp(m, vector<int>(n,-1));
        dp[0][0]=1;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(i==0 && j==0)
                dp[i][j]=1;
                else{
                    int up=0;
                    int left=0;
                    if(i>0) up=dp[i-1][j];
                    if(j>0) left=dp[i][j-1];
                    dp[i][j]=up+left;

                }

            }
        }
        return dp[m-1][n-1];
    }
};