// Last updated: 8/5/2025, 1:20:09 AM
class Solution {
public:
    vector<int> grayCode(int n) {
        vector<int> res;
        int total = 1 << n; // 2^n
        for (int i = 0; i < total; ++i) {
            res.push_back(i ^ (i >> 1)); // Apply Gray code formula
        }
        return res;
    }
};
