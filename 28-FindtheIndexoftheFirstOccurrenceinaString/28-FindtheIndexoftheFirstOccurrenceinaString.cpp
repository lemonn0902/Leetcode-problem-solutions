// Last updated: 6/28/2026, 11:37:15 AM
1class Solution {
2public:
3    int strStr(string haystack, string needle) {
4        int n = haystack.size();
5        int m = needle.size();
6
7        for (int i = 0; i <= n - m; i++) {
8            if (haystack.substr(i, m) == needle) {
9                return i;
10            }
11        }
12
13        return -1;
14    }
15};