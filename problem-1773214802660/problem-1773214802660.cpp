// Last updated: 3/11/2026, 1:10:02 PM
1class Solution {
2public:
3    int numberOfSubstrings(string s) {
4        vector<int> lastSeen={-1,-1,-1}; //a,b,c
5        int ans=0;
6        int mini=INT_MAX;
7        for(int i=0;i<s.size();i++){
8            if(s[i]=='a') lastSeen[0]=i;
9            if(s[i]=='b') lastSeen[1]=i;
10            if(s[i]=='c') lastSeen[2]=i;
11            int mini=min(min(lastSeen[0], lastSeen[1]), lastSeen[2]);
12            ans=ans+mini+1;
13        }
14        return ans;
15    }
16};