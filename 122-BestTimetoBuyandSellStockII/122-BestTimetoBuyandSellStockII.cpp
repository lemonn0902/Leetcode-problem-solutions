// Last updated: 6/4/2025, 10:52:33 PM
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max=0;
        int start= prices[0];
        int n=prices.size();
        for(int i=1;i<n;i++){
            if(prices[i]>start){
                max+= prices[i]-start;
            }
            start= prices[i];
        }
        return max;
    }
};