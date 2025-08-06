// Last updated: 8/7/2025, 1:21:00 AM
class Solution {
public:
    int f(vector<int>& days, vector<int>& costs,int index, vector<int>& dp){
        if(index>=days.size()){
            return 0;
        }
        if(dp[index]!=-1) return dp[index];
        int cost1=costs[0]+f(days,costs,index+1,dp);
        int i = index;
        while (i < days.size() && days[i] < days[index] + 7) {
            i++;
        }
        int cost2 = costs[1] + f(days, costs, i, dp);
        int j=index;
        while(j<days.size()&& days[j]<days[index]+30) j++;
        int cost3=costs[2]+f(days,costs,j,dp);
        return dp[index]=min(cost1, min(cost2, cost3));

    }
    int mincostTickets(vector<int>& days, vector<int>& costs) {
        int n=days.size();
        vector<int> dp(n,-1);
        return f(days,costs,0,dp);
    }
};