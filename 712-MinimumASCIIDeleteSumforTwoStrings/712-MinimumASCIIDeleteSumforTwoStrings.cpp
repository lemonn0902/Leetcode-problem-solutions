// Last updated: 5/7/2026, 11:06:08 PM
1class Solution {
2public:
3    int f(int i, int j, string& s1, string& s2, vector<vector<int>>& dp) {
4        if (i == s1.size()) {
5            int sum = 0;
6
7            while (j < s2.size()) {
8                sum += s2[j];
9                j++;
10            }
11
12            return sum;
13        }
14
15        if (j == s2.size()) {
16            int sum = 0;
17
18            while (i < s1.size()) {
19                sum += s1[i];
20                i++;
21            }
22
23            return sum;
24        }
25        if (dp[i][j] != -1)
26            return dp[i][j];
27        if (s1[i] == s2[j])
28            return dp[i][j] = f(i + 1, j + 1, s1, s2, dp);
29        else {
30            int s1_del = f(i + 1, j, s1, s2, dp) + int(s1[i]);
31            int s2_del = f(i, j + 1, s1, s2, dp) + int(s2[j]);
32            return dp[i][j] = min(s1_del, s2_del);
33        }
34    }
35    int minimumDeleteSum(string s1, string s2) {
36        vector<vector<int>> dp(s1.size(), vector<int>(s2.size(), -1));
37        return f(0, 0, s1, s2, dp);
38    }
39};