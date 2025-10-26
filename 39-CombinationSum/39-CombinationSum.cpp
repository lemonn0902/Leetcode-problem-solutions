// Last updated: 10/26/2025, 3:18:06 PM
class Solution {
public:
    void backtrack(vector<int>& candidates, int target, vector<vector<int>>& res, vector<int>& curr , int index){
        int n=candidates.size();
        if(index==n){
            if(target==0){
                res.push_back(curr);
                
            }
            return;
        }
        if(candidates[index]<=target){
            curr.push_back(candidates[index]);
            backtrack(candidates,target-candidates[index],res,curr,index);
            curr.pop_back();
        }
        backtrack(candidates, target,res, curr, index+1);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> res;
        vector<int> curr;
        backtrack(candidates, target, res, curr, 0);
        return res;
    }
};