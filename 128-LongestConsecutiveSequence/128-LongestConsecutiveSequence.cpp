// Last updated: 10/8/2025, 9:35:47 PM
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.empty()) return 0;
        int ans = 0;
        unordered_set<int> st(nums.begin(), nums.end());
        for (int n : st) {
            if (st.find(n-1)==st.end()) {
                int length=1;
                while (st.find(n+length) != st.end()) {
                    length++;
                }
                ans = max(ans,length);
            }
        }
        return ans;
    }
};
