// Last updated: 4/21/2025, 4:09:31 PM
class Solution {
public:
    int f(vector<int>& cost, int start, vector<int>& dp, int index){
        if(index == start) return cost[start];
        if(index == start + 1) return cost[start + 1];
        if(dp[index-start]!=-1) return dp[index-start];
        int os=f(cost, start, dp, index-1) +cost[index];
        int ts=f(cost, start, dp, index-2) +cost[index];
        return dp[index-start]= min(os, ts);
    }
    int minCostClimbingStairs(vector<int>& cost) {
        int n= cost.size();
        
        vector<int> dp(n,-1);
        int case1= f(cost, 0, dp,n-1);
        int case2= f(cost, 0, dp,n-2);
        return min(case1, case2);
    }
};