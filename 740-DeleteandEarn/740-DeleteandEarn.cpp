// Last updated: 3/30/2026, 12:29:19 AM
1class Solution {
2public:
3    int f(int i,vector<int>& points, vector<int>& dp){
4        if(i==0) return 0;
5        if(i==1) return points[1];
6        if(dp[i]!=-1) return dp[i];
7        int take=f(i-2,points,dp)+points[i];
8        int skip=f(i-1,points,dp);
9        return dp[i]=max(take,skip);
10    }
11    int deleteAndEarn(vector<int>& nums) {
12        int maxi=*max_element(nums.begin(), nums.end());
13        vector<int> points(maxi+1,0);
14        for(int n:nums){
15            points[n]+=n;
16        }
17        vector<int> dp(maxi+1,-1);
18        return f(maxi,points,dp);
19    }
20};