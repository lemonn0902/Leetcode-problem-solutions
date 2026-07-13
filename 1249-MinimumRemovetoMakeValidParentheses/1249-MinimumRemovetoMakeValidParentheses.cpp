// Last updated: 7/14/2026, 12:48:41 AM
1class Solution {
2public:
3    string minRemoveToMakeValid(string s) {
4        string temp;
5        int open = 0;
6        for (char c : s) {
7            if (c == '(') {
8                open++;
9                temp += c;
10            } else if (c == ')') {
11                if (open > 0) {
12                    open--;
13                    temp += c;
14                }
15            } else {
16                temp += c;
17            }
18        }
19        string ans;
20        for (int i = temp.size() - 1; i >= 0; i--) {
21            if (temp[i] == '(' && open > 0) {
22                open--;
23            } else {
24                ans += temp[i];
25            }
26        }
27        reverse(ans.begin(), ans.end());
28        return ans;
29    }
30};