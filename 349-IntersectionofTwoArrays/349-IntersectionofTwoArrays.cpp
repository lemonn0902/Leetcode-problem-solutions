// Last updated: 9/6/2025, 10:31:36 AM
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> st(nums1.begin(), nums1.end());
        unordered_set<int> res;
        for(int n: nums2){
            if(st.count(n)){
                res.insert(n);
            }
        }
        vector<int> ans(res.begin(), res.end());
        return ans;

    }
};