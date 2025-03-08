// Last updated: 3/8/2025, 11:26:09 AM
class Solution {
public:
    void getSubsets(vector<int>& nums, int index, vector<vector<int>>& res,
                    vector<int>& current) {
        // base case:
        if (index == nums.size()) {
            
            res.push_back(current);
            
            
            return;
        }

        current.push_back(nums[index]);
        getSubsets(nums, index + 1, res, current);
        current.pop_back();
        getSubsets(nums, index + 1,  res, current);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> res;
        vector<int> current;
        getSubsets(nums, 0, res, current);
        sort(res.begin(),res.end());
        res.erase(unique(res.begin(), res.end()), res.end());
        return res;
    }
};