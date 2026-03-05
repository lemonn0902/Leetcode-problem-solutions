// Last updated: 3/5/2026, 3:24:33 PM
1class Solution {
2public:
3    int lengthOfLongestSubstring(string s) {
4        int max_len=0;
5        int l=0, r=0;
6        int n=s.size();
7        string str="";
8        while(r<n){
9            while(str.find(s[r])!=string::npos){
10                l++;
11                str.erase(0,1);
12            }
13            max_len=max(max_len, r-l+1);
14            str=str+s[r];
15            r++;
16        }
17        return max_len;
18    }
19};