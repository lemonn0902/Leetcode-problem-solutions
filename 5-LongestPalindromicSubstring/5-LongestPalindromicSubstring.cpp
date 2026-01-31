// Last updated: 1/31/2026, 5:00:27 PM
1class Solution {
2public:
3    int expand(string s, int left, int right){
4        int n=s.size();
5        while(left>=0 && right<n && s[left]==s[right]){
6            left--;
7            right++;
8        }
9        return right-left-1;
10    }
11    string longestPalindrome(string s) {
12        int start=0;
13        int maxi=0;
14         for(int center=0;center<s.size();center++){
15            int len1= expand(s, center, center);
16            int len2= expand(s, center, center+1);
17            int curr=max(len1,len2);
18            if(curr>maxi){
19                maxi=curr;
20                start=center-(curr-1)/2;
21            }
22            
23         }
24         return s.substr(start, maxi);
25    }
26};