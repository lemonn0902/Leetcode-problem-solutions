// Last updated: 4/28/2025, 7:20:59 PM
class Solution {
public:
    // int f(int i, int j, vector<vector<int>>& matrix, int n, vector<vector<int>>& dp){
    //     //base case:
    //     if(i==n-1) return matrix[i][j];
    //     if(dp[i][j]!=-1) return dp[i][j];
    //     int d= f(i+1, j, matrix, n,dp) +matrix[i][j];
    //     int left = (j > 0) ? f(i+1, j-1, matrix, n,dp) +matrix[i][j] : INT_MAX;
    //     int right = (j < n-1) ? f(i+1, j+1, matrix, n,dp) +matrix[i][j]: INT_MAX;

    //     return dp[i][j]=min(d, min(left,right));

    // }
    int minFallingPathSum(vector<vector<int>>& matrix) {
        
        int n= matrix.size();
        vector<vector<int>> dp(n, vector<int>(n,0));
        // int ans=INT_MAX; #memoization approach
        // for(int j=0;j<n;j++)
        //     ans= min(ans, f(0,j,matrix,n,dp));
        // return ans;
        //base case: 
        for(int j=0;j<n;j++){
            dp[n-1][j]=matrix[n-1][j];
        }
        for(int i=n-2;i>=0;i--){
            for(int j=n-1;j>=0;j--){
                int d= dp[i+1][j]  +matrix[i][j];
                int left = (j > 0) ? dp[i+1][j-1] +matrix[i][j] : INT_MAX;
                int right = (j < n-1) ? dp[i+1][j+1] +matrix[i][j]: INT_MAX;
                dp[i][j]= min(d, min(left, right));
            }
        }
        int ans=INT_MAX;
        for(int j=0;j<n;j++){
            ans= min(ans, dp[0][j]);
        }
        return ans;
    }
};