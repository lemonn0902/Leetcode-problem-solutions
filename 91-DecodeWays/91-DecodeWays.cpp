// Last updated: 8/11/2026, 11:13:03 PM
1class Solution {
2public:
3    int f(string s, vector<int>& dp,int i){
4        int n = s.size();
5        if(i>=n) return 1;
6        if(dp[i]!=-1) return dp[i];
7        int takeOne=0;
8        if(s[i]!='0') takeOne= f(s,dp,i+1);
9        int takeTwo=0;
10        string st=s.substr(i,1);
11        if(i+1<n){
12           int two = (s[i] - '0') * 10 + (s[i + 1] - '0');
13            if(two>=10 && two<=26){
14            takeTwo= f(s,dp,i+2);
15        }
16        }
17        
18        return dp[i]=takeOne+takeTwo;
19         
20    }
21    int numDecodings(string s) {
22        int n=s.size();
23        vector<int> dp(n,-1);
24        return f(s,dp,0);
25    }
26};