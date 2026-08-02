// Last updated: 8/2/2026, 11:11:43 AM
1class Solution {
2public:
3    int f(vector<int>& stoneValue, int i,  vector<int>& dp){
4        int n=stoneValue.size();
5        if(i>=n) return 0;
6        if(dp[i]!=-1) return dp[i];
7        int one = stoneValue[i]-f(stoneValue,i+1,dp);
8        int two=INT_MIN, three=INT_MIN;
9        if(i+1<n) two = stoneValue[i]+stoneValue[i+1]-f(stoneValue, i+2,dp);
10        if(i+2<n) three = stoneValue[i]+stoneValue[i+1]+stoneValue[i+2]-f(stoneValue, i+3,dp);
11        return dp[i]=max(one,max(two,three));
12    }
13    string stoneGameIII(vector<int>& stoneValue) {
14        int n = stoneValue.size();
15        vector<int> dp(n,-1);
16        int ans= f(stoneValue, 0 , dp);
17        if(ans>0) return "Alice";
18        else if(ans==0) return "Tie";
19        else return "Bob";
20    }
21};