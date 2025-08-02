// Last updated: 8/3/2025, 12:33:31 AM
class Solution {
public:
    void backtrack(vector<int>& nums, vector<int> perm,vector<vector<int>>& res, vector<bool> used){
        int n=nums.size();
        //base case
        if(perm.size()==n){
            res.push_back(perm);
            return;
        }
        for(int i=0;i<n;i++){
            if(used[i]) continue;
            perm.push_back(nums[i]);
            used[i]=true;
            backtrack(nums, perm, res,used);
            perm.pop_back();
            used[i]=false;
        }

    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<int> perm;
        vector<vector<int>> res;
        int n=nums.size();
        vector<bool> used(n, false);
        backtrack(nums, perm,res, used);
        return res;
    }
};