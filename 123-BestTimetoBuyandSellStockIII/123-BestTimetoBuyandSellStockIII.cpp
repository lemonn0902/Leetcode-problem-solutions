// Last updated: 6/5/2025, 1:12:26 AM
class Solution {
public:
    int f( int index, bool canBuy, vector<int>& prices, int transLeft, vector<vector<vector<int>>>& dp){
        int n= prices.size();
        if(index==n || transLeft==0){
            return 0;
        }
        if(dp[index][canBuy][transLeft]!=-1) return dp[index][canBuy][transLeft];
        if(canBuy){
            int buy=-prices[index]+f(index+1, false, prices, transLeft,dp);
            int skip= f(index+1, true, prices, transLeft,dp);
            return dp[index][canBuy][transLeft]=max(buy, skip);
        }else{
            int sell= prices[index]+f(index+1, true, prices, transLeft-1,dp);
            int skip= f(index+1, false, prices, transLeft,dp);
            return dp[index][canBuy][transLeft]=max(sell, skip);
        }
        
    }
    int maxProfit(vector<int>& prices) {
        int n= prices.size();
        vector<vector<vector<int>>> dp(n, vector<vector<int>>(2, vector<int>(3, -1)));
        return f(0, true, prices,2, dp);
    }
};