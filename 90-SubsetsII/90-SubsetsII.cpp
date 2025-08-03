// Last updated: 8/3/2025, 9:48:43 PM
class Solution {
public:
    void backtrack(int index, vector<int>& nums, vector<int> sub, vector<vector<int>>& res ){
        if(index==nums.size()){
            res.push_back(sub);
            return;
        }
        
        sub.push_back(nums[index]);
        backtrack(index+1,nums,sub,res);
        sub.pop_back();
        while(index+1<nums.size()&& nums[index]==nums[index+1]) index++;
        backtrack(index+1,nums,sub,res);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<int> sub;
        vector<vector<int>> res;
        backtrack(0,nums,sub, res);
        return res;
    }
};