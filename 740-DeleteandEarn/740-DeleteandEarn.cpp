// Last updated: 8/11/2026, 10:34:59 PM
1class Solution {
2public:
3    int solve(vector<int>& values, unordered_map<int, int>& freq,
4              vector<int>& dp, int idx) {
5
6        int n = values.size();
7
8        if (idx >= n)
9            return 0;
10
11        if (dp[idx] != -1)
12            return dp[idx];
13
14        int notTake = solve(values, freq, dp, idx + 1);
15        int gain = values[idx] * freq[values[idx]];
16        int next;
17        if (idx + 1 < n && values[idx + 1] == values[idx] + 1)
18            next = idx + 2;
19        else
20            next = idx + 1;
21        int take = gain + solve(values, freq, dp, next);
22        return dp[idx] = max(take, notTake);
23    }
24
25    int deleteAndEarn(vector<int>& nums) {
26        unordered_map<int, int> freq;
27        for (int x : nums)
28            freq[x]++;
29        vector<int> values;
30        for (auto& p : freq)
31            values.push_back(p.first);
32        sort(values.begin(), values.end());
33        vector<int> dp(values.size(), -1);
34        return solve(values, freq, dp, 0);
35    }
36};