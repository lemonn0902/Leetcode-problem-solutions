// Last updated: 8/4/2025, 12:50:00 PM
class Solution {
public:
    string encode(vector<int>& needs) {
        string key = "";
        for (int n : needs)
            key += to_string(n) + "#";
        return key;
    }

    int backtrack(vector<int>& price, vector<vector<int>>& special,
                  vector<int>& needs, unordered_map<string, int>& memo) {
        string key = encode(needs);
        if (memo.count(key)) {
            return memo[key];
        }
        int minCost = 0;
        int n = special.size();
        int m = needs.size();
        // base case

        for (int j = 0; j < m; j++) {
            minCost += price[j] * needs[j];
        }
        minCost = min(minCost, minCost);

        for (auto& offer : special) {
            vector<int> tempNeed = needs;
            bool valid = true;
            for (int i = 0; i < m; i++) {
                if (tempNeed[i] < offer[i]) {
                    valid = false;
                    break;
                }
                tempNeed[i] -= offer[i];
            }
            if (valid) {
                int offerCost =
                    offer[m] + backtrack(price, special, tempNeed, memo);
                minCost = min(minCost, offerCost);
            }
        }
        return memo[key] = minCost;
    }
    int shoppingOffers(vector<int>& price, vector<vector<int>>& special,
                       vector<int>& needs) {
        int cost = 0;
        int minCost = INT_MAX;
        unordered_map<string, int> memo;

        return backtrack(price, special, needs, memo);
        
    }
};