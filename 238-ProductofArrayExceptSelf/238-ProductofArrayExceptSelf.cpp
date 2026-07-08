// Last updated: 7/8/2026, 11:06:55 PM
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> res(n);

        // First Pass: Prefix Products
        res[0] = 1;
        for (int i = 1; i < n; ++i) {
            res[i] = res[i - 1] * nums[i - 1];
        }

        // Second Pass: Suffix Products
        int suffix = 1;
        for (int i = n - 1; i >= 0; --i) {
            res[i] *= suffix;
            suffix *= nums[i];
        }

        return res;
    }
};