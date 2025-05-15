// Last updated: 5/16/2025, 1:32:27 AM
class Solution {
public:
    int f(int index, int target, vector<int>& coins, vector<vector<int>>& dp){
        if(index==0){
            if(target%coins[index]==0) return target/coins[index];
            else return 1e9;
        }
        if(dp[index][target]!=-1) return dp[index][target];
        int notTake= 0+f(index-1, target, coins,dp);
        int take= INT_MAX;
        if(coins[index]<=target){
            take= 1+f(index, target-coins[index], coins,dp);
        }
        return dp[index][target]=min(take, notTake);
    }
    int coinChange(vector<int>& coins, int amount) {
        int n= coins.size();
        vector<vector<int>> dp(n, vector<int>(amount+1, -1));
        if(amount==0) return 0;
        int ans = f(n - 1, amount, coins, dp);
        return (ans >= 1e9) ? -1 : ans;
    }
};