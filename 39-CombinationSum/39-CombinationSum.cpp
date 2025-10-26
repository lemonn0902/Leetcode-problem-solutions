// Last updated: 10/26/2025, 2:49:02 PM
class Solution {
public:
    void backtrack(vector<int>& candidates, int target, vector<vector<int>>& res, vector<int>& curr , int index){
        if(target==0){
            
            res.push_back(curr);
            return;
        }
        for(int i=index;i<candidates.size();i++){
            if(candidates[i]> target) break;
            curr.push_back(candidates[i]);
            backtrack(candidates, target-candidates[i], res, curr, i);
            curr.pop_back();
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        vector<vector<int>> res;
        vector<int> curr;
        backtrack(candidates, target, res, curr, 0);
        return res;
    }
};