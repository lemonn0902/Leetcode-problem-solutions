// Last updated: 8/3/2025, 8:54:30 PM
class Solution {
public:
    void backtrack(int start, vector<int>& candidates, int target, vector<int> curr,vector<vector<int>>& res ){
        int n= candidates.size();
        if(target==0){
            res.push_back(curr);
            return;
        }
        for(int i=start;i<n;i++){
            if(i>start&& candidates[i]==candidates[i-1]) continue;
            if(target<candidates[i]) break;
            curr.push_back(candidates[i]);
            backtrack(i+1,candidates,target-candidates[i],curr,res);
            curr.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        vector<int> curr;
        vector<vector<int>> res;
        backtrack(0,candidates, target, curr, res);
        return res;
    }
};