// Last updated: 4/18/2025, 12:14:44 AM
class Solution {
public:
    void getSubsets(vector<int>& nums, int index,int n, vector<vector<int>> &res, vector<int>& subsets){
        if(index==n)
        {
            res.push_back(subsets);
            return;
        }
        subsets.push_back(nums[index]);
        getSubsets(nums, index+1, n, res, subsets);
        subsets.pop_back();
        getSubsets(nums, index+1, n, res, subsets);

    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> res;
        int n=nums.size();
        vector<int> subsets;
        getSubsets(nums, 0,n, res, subsets);
        return res;
    }
};