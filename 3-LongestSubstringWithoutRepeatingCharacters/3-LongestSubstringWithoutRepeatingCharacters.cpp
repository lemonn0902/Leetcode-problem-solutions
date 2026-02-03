// Last updated: 2/3/2026, 12:19:36 PM
1class Solution {
2public:
3    int lengthOfLongestSubstring(string s) {
4         int n=s.size();
5         int l=0;
6         int r=0;
7         int maxi=0;
8         string x="";
9         while(r<n){
10            while(x.find(s[r])!=string::npos){
11                x.erase(0,1);
12                l++;
13                
14            }
15            x.push_back(s[r]);
16            maxi=max(maxi, r-l+1);
17            r++;
18         }
19         return maxi;
20    }
21};