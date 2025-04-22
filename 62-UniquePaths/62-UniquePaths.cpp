// Last updated: 4/23/2025, 1:49:43 AM
class Solution {
public:
    int f(int i , int j, vector<vector<int>>& dp){
        //base case:
        if(i==0 && j==0)//reached top
        return 1;
        if(i<0 || j<0) //out of bounds of the matrix cell
        return 0; 
        if(dp[i][j]!=-1) return dp[i][j];
        int left= f(i, j-1,dp);
        int right= f(i-1, j,dp);
        return dp[i][j]=left+right;
    }
    int uniquePaths(int m, int n) {
        vector<vector<int>> dp(m, vector<int>(n,-1));
        return f(m-1, n-1,dp);
    }
};