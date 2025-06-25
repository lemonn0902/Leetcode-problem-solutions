// Last updated: 6/26/2025, 1:07:13 AM
class Solution {
public:
//memoizaton:
    // int f(int n, vector<int>& dp){
    //     if(n<=1) return 1;
    //     if(dp[n]!=-1) return dp[n];
    //     int total =0;
        
    //     for(int root=1;root<=n;root++){
    //         int left=f(root-1,dp);
    //         int right=f(n-root,dp);
    //         total=total+(left*right);
    //     }
    //     dp[n]=total;
    //     return total;

    // }
    int numTrees(int n) {
        vector<int> dp(n+1,0);
        dp[0]=dp[1]=1;
        for(int i=2;i<=n;i++){
            for(int j=1;j<=i;j++){
                dp[i]+=dp[j-1]*dp[i-j];
            }
        }
        return dp[n];
    }
};