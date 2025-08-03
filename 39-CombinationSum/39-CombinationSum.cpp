// Last updated: 8/3/2025, 7:24:02 PM
class Solution {
public:
    void backtrack(vector<int>& candidates, int target, vector<int> curr, vector<vector<int>>& res, int start){
        int n=candidates.size();
        if(target==0){
            res.push_back(curr);
            return;
        }
        for(int i=start;i<n;i++){
            if(candidates[i]>target) continue;
            curr.push_back(candidates[i]);
            backtrack(candidates, target-candidates[i], curr, res,i);
            curr.pop_back();
            

        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        vector<int> curr;
        vector<vector<int>> res;
        int currSum=0;
        backtrack(candidates, target, curr, res, 0);
        return res;
    }
};