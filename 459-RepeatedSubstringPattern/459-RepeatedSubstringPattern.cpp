// Last updated: 6/28/2026, 12:14:29 PM
1class Solution {
2public:
3    bool repeatedSubstringPattern(string s) {
4        int n = s.size();
5
6        for (int len = 1; len <= n / 2; len++) {
7            if (n % len != 0)
8                continue;
9
10            string pattern = s.substr(0, len);
11            string temp = "";
12
13            while (temp.size() < n) {
14                temp += pattern;
15            }
16
17            if (temp == s)
18                return true;
19        }
20
21        return false;
22    }
23};