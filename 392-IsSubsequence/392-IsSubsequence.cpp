// Last updated: 1/30/2026, 1:22:16 PM
1class Solution {
2public:
3    bool isSubsequence(string s, string t) {
4        int m=s.size();
5        int n=t.size();
6        int i=0;
7        int j=0;
8        while(i<m && j<n){
9            if(s[i]==t[j]){
10                i++;
11                j++;
12            }
13            else{
14                j++;
15            }
16        }
17        return i==s.size();
18    }
19};