// Last updated: 6/26/2025, 12:44:17 AM
class Solution {
public:
    int f(int n, vector<int>& dp){
        if(n<=1) return 1;
        if(dp[n]!=-1) return dp[n];
        int total =0;
        
        for(int root=1;root<=n;root++){
            int left=f(root-1,dp);
            int right=f(n-root,dp);
            total=total+(left*right);
        }
        dp[n]=total;
        return total;

    }
    int numTrees(int n) {
        vector<int> dp(n+1,-1);
        return f(n,dp);

    }
};