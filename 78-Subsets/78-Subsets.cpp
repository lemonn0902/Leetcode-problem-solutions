// Last updated: 9/22/2025, 4:05:38 PM
class Solution {
public:
    void backtrack(vector<int>& nums, vector<vector<int>>& res, vector<int>& sub, int i){
        int n=nums.size();
        if(i==n){
            res.push_back(sub);
            return;
        }
        sub.push_back(nums[i]);
        backtrack(nums, res, sub,i+1);
        sub.pop_back();
        backtrack(nums, res, sub,i+1);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> sub;
        backtrack(nums, res, sub,0);
        return res;
    }
};