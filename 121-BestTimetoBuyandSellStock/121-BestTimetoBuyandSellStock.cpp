// Last updated: 6/1/2025, 11:22:24 PM
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int mini=prices[0];
        int profit=0;
        for(int i=1;i<n;i++){
            int cost= prices[i]-mini;
            profit=max(cost, profit);
            mini= min(mini, prices[i]);
        }
        return profit;
    }
};