// Last updated: 1/31/2026, 1:33:28 PM
1class Solution {
2public:
3    long long minimumSteps(string s) {
4        long long ans=0;
5        int black=0;
6        int n=s.size();
7        for(int i=0;i<n;i++){
8            if(s[i]=='1') black++;
9            else ans+=black;
10
11        }
12        return ans;
13    }
14};