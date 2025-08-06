// Last updated: 8/7/2025, 12:25:06 AM
class Solution {
public:
    int f(vector<int>& coins, int target,vector<vector<int>>& dp, int index ){
        if(index==0){
            if(target%coins[0]==0){
                return target/coins[0];
            }
            else return 1e9;
        }
        if(dp[index][target]!=-1) return dp[index][target];
            int notTake=0+f(coins, target, dp, index-1);
            int take=1e9;
            if(coins[index]<=target){
                take=1+f(coins, target-coins[index], dp,index);
            }
        return dp[index][target]=min(take,notTake);

        
    }
    int coinChange(vector<int>& coins, int amount) {
        int n=coins.size();
        vector<vector<int>> dp(n,vector<int>(amount+1,-1));
        if(amount==0 ) return 0;
        return f(coins, amount, dp, n-1)==1e9? -1:f(coins, amount, dp, n-1);
    }
};