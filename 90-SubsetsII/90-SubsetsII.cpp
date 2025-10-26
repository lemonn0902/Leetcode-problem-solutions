// Last updated: 10/26/2025, 4:28:05 PM
class Solution {
public:
    void backtrack(vector<int>& nums, int n, int ind, vector<vector<int>>& res,vector<int> curr){
        res.push_back(curr);
        for(int i=ind;i<n;i++){
            if(i!=ind&&nums[i]==nums[i-1]) continue;
            curr.push_back(nums[i]);
            backtrack(nums, n, i+1,res,curr);
            curr.pop_back();
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> res;
        vector<int> curr;
        int n=nums.size();
        backtrack(nums,n,0,res,curr);
        return res;
    }
};