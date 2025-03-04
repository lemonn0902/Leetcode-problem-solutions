class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> subsets;
        createSubsets(nums, 0, res, subsets);
        return res;
    }
    void createSubsets(vector<int> & nums, int index, vector<vector<int>> &res, vector<int> &subsets){
        if(index==nums.size()){
            res.push_back(subsets);
            return;
        }

        subsets.push_back(nums[index]);
        createSubsets(nums, index+1, res, subsets);

        subsets.pop_back();
        createSubsets(nums, index+1, res, subsets);
    }
};