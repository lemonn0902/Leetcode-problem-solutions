// Last updated: 8/5/2025, 7:09:38 PM
class Solution {
public:
    // int f(int index, vector<int>& dp){
    //     if(index==0||index==1){
    //         return 1;
    //     }
    //     if(dp[index]!=-1) return dp[index];
    //     //take 1 step
    //     int p=f(index-1,dp);
    //     //take 2 steps
    //     int r=f(index-2,dp);
    //     dp[index]=p+r;
    //     return dp[index];


    // }
    int climbStairs(int n) {
        
        vector<int> dp(n+1,-1);
        dp[0]=1;
        dp[1]=1;
        for(int i=2;i<=n;i++){
            int p=dp[i-1];
            int q=dp[i-2];
            dp[i]=p+q;

        }
        return dp[n];
    }
};