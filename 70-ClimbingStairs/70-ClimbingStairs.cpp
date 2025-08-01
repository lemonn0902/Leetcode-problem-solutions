// Last updated: 8/1/2025, 11:40:16 AM
class Solution {
public:
    int f(int n, int i, vector<int>& dp){
        
        //base case
        if(i==n) return 1;
        if(i>n) return 0;
        if(dp[i]!=-1) return dp[i];
        //climb one step
        int x=f(n,i+1,dp);
        //climb 2 steps
        int y=f(n,i+2,dp);
        dp[i]= x+y;
        return dp[i];
    }
    int climbStairs(int n) {
        vector<int> dp(n+1,-1);
        return f(n,0,dp);
    }
};