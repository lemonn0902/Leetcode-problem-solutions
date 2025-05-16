// Last updated: 5/16/2025, 8:12:46 PM
class Solution {
public:
    int f(int index, int target, vector<int>& coins, int current_sum, vector<vector<int>>& dp){
        if(index<0){
            if(current_sum==target) return 1;
            else return 0;
        }
        if(dp[index][current_sum]!=-1) return dp[index][current_sum];
        int notTake= f(index-1, target, coins, current_sum,dp);
        int take=0;
        if(current_sum+coins[index]<=target){
            take= f(index, target, coins, current_sum+coins[index],dp);
        }
        return dp[index][current_sum]=notTake+take;
    }
    int change(int amount, vector<int>& coins) {
        int n= coins.size();
        int tot=0;
        vector<vector<int>> dp(n, vector<int>(amount+1, -1));
        return f(n-1, amount, coins,0, dp);
    }
};