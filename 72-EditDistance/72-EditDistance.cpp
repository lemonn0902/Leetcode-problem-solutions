// Last updated: 5/7/2026, 12:21:54 AM
1class Solution {
2public:
3    int f(int i, int j, string& word1, string& word2, int n, int m,
4          vector<vector<int>>& dp) {
5        if (i == n)
6            return m - j;
7        if (j == m)
8            return n - i;
9        if (dp[i][j] != -1)
10            return dp[i][j];
11        if (word1[i] == word2[j]) {
12            return dp[i][j] = f(i + 1, j + 1, word1, word2, n, m, dp);
13        }
14        int insert = 1 + f(i, j + 1, word1, word2, n, m, dp);
15        int del = 1 + f(i + 1, j, word1, word2, n, m, dp);
16        int replace = 1 + f(i + 1, j + 1, word1, word2, n, m, dp);
17        return dp[i][j] = min(insert, min(del, replace));
18    }
19
20    int minDistance(string word1, string word2) {
21        int n = word1.size();
22        int m = word2.size();
23        vector<vector<int>> dp(n, vector<int>(m, -1));
24        return f(0, 0, word1, word2, n, m, dp);
25    }
26};