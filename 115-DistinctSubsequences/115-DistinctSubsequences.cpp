// Last updated: 5/6/2026, 11:36:39 PM
1class Solution {
2public:
3    int f(int i, int j, string& s, string& t,
4          vector<vector<int>>& dp) {
5
6        if (j == t.size()) return 1;
7
8        if (i == s.size()) return 0;
9
10        if (dp[i][j] != -1)
11            return dp[i][j];
12
13        int take = 0;
14
15        if (s[i] == t[j]) {
16            take = f(i + 1, j + 1, s, t, dp);
17        }
18
19        int notTake = f(i + 1, j, s, t, dp);
20
21        return dp[i][j] = take + notTake;
22    }
23
24    int numDistinct(string s, string t) {
25
26        vector<vector<int>> dp(
27            s.size(),
28            vector<int>(t.size(), -1)
29        );
30
31        return f(0, 0, s, t, dp);
32    }
33};