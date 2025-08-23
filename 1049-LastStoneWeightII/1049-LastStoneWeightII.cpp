// Last updated: 8/23/2025, 2:39:38 PM
class Solution {
public:
    int f(int i,vector<int>& stones, int current_sum, vector<vector<int>>& dp, int target, int total){
        int n=stones.size();
        if(i==n||current_sum>=target){
            return abs(current_sum-(total-current_sum));
        }
        if(dp[i][current_sum]!=-1) return dp[i][current_sum];
        int a=f(i+1,stones,current_sum,dp,target,total);
        int b=f(i+1, stones, current_sum+stones[i],dp,target,total);
        return dp[i][current_sum]=min(a,b);


    }
    int lastStoneWeightII(vector<int>& stones) {
        int tot=0;
        for(int i=0;i<stones.size();i++){
            tot+=stones[i];
        }
        int target=(tot+1)/2;
        int n=stones.size();
        vector<vector<int>> dp(n,vector<int>(tot+1,-1));
        return f(0,stones,0,dp,target, tot);
    }
};