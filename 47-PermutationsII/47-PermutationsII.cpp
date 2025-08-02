// Last updated: 8/3/2025, 1:37:20 AM
class Solution {
public:
    void backtrack(vector<int>& nums,vector<int> perm,vector<bool> used,vector<vector<int>>& res){
        int n=nums.size();
        //base case
        if (perm.size() == n && (find(res.begin(), res.end(), perm) == res.end())) {
            res.push_back(perm);
            return;
        }
        for(int i=0;i<n;i++){
            if(used[i]==true) continue;
            perm.push_back(nums[i]);
            used[i]=true;
            backtrack(nums, perm, used,res);
            used[i]=false;
            perm.pop_back();
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<int> perm;
        vector<vector<int>> res;
        int n=nums.size();
        vector<bool> used(n, false);
        backtrack(nums, perm, used, res);
        return res;
    }
};