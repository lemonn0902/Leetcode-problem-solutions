// Last updated: 3/17/2025, 11:24:09 PM
class Solution {
public:
    bool divideArray(vector<int>& nums) {
        unordered_map<int, int> freq;
        for (int num : nums) {
            freq[num]++;
        }
        for (auto& it : freq) {
            if (it.second % 2 != 0) {
                return false;
            }
        }

        return true;
    }
};
