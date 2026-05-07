// Last updated: 5/7/2026, 11:35:41 PM
1class Solution {
2public:
3    bool f(string s, vector<string>& wordDict,vector<int>& dp,int idx){
4        if(idx==s.size()) return true;
5        if(dp[idx]!=-1) return dp[idx];
6        for(string& str:wordDict){
7            int len=str.size();
8            if(idx+len<=s.size()&&s.substr(idx,len)==str){
9                if(f(s,wordDict,dp,idx+len)) return dp[idx]=true;
10            }
11        }
12        return dp[idx]=false;
13
14    }
15    bool wordBreak(string s, vector<string>& wordDict) {
16        vector<int> dp(s.size(), -1);
17        return f(s,wordDict,dp,0);
18    }
19};