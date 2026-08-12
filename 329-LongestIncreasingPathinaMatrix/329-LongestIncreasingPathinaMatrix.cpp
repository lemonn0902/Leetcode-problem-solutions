// Last updated: 8/13/2026, 1:08:53 AM
1class Solution {
2public:
3    int f(vector<vector<int>>& matrix, int m, int n, vector<vector<int>>& dp,
4          int i, int j) {
5        if (i < 0 || j < 0 || i >= m || j >= n)
6            return 0;
7        if (dp[i][j] != -1)
8            return dp[i][j];
9        int nr[4] = {-1, 1, 0, 0};
10        int nc[4] = {0, 0, -1, 1};
11        int maxi = 1;
12        for (int k = 0; k < 4; k++) {
13            int curr_r = i + nr[k];
14            int curr_c = j + nc[k];
15            int move = 0;
16            if (curr_r >= 0 && curr_r < m && curr_c >= 0 && curr_c < n &&
17                matrix[curr_r][curr_c] > matrix[i][j]) {
18                move = 1 + f(matrix, m, n, dp, curr_r, curr_c);
19            }
20            maxi = max(maxi, move);
21        }
22        return dp[i][j] = maxi;
23    }
24    int longestIncreasingPath(vector<vector<int>>& matrix) {
25        int m = matrix.size();
26        int n = matrix[0].size();
27        int ans=0;
28        vector<vector<int>> dp(m, vector<int>(n, -1));
29        for (int i = 0; i < m; i++) {
30            for (int j = 0; j < n; j++) {
31                ans = max(ans, f(matrix, m, n, dp, i, j));
32            }
33        }
34        return ans;
35    }
36};