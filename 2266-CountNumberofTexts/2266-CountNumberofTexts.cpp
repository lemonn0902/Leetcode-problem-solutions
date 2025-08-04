// Last updated: 8/4/2025, 1:55:00 PM
class Solution {
public:
    const int MOD = 1e9 + 7;

    unordered_map<char, int> maxD = {
        {'2', 3}, {'3', 3}, {'4', 3}, {'5', 3},
        {'6', 3}, {'7', 4}, {'8', 3}, {'9', 4}
    };

    int solve(const string& pressedKeys, int index, vector<int>& dp) {
        int n = pressedKeys.size();
        if (index == n) return 1;
        if (dp[index] != -1) return dp[index];

        long long ways = 0;
        char digit = pressedKeys[index];
        int maxRepeat = maxD[digit];

        for (int i = index; i < n && i < index + maxRepeat; ++i) {
            if (pressedKeys[i] != digit) break;
            ways = (ways + solve(pressedKeys, i + 1, dp)) % MOD;
        }

        return dp[index] = ways;
    }

    int countTexts(string pressedKeys) {
        int n = pressedKeys.size();
        vector<int> dp(n, -1);
        return solve(pressedKeys, 0, dp);
    }
};
