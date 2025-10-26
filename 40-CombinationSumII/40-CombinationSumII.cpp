// Last updated: 10/26/2025, 3:46:59 PM
class Solution {
public:
    void backtrack(vector<int>& candidates, int target, vector<vector<int>>& res, vector<int>& curr, int index) {
        if(target==0){
            res.push_back(curr);
            return;
        }
        for(int i=index;i<candidates.size();i++){
            if(i>index&&candidates[i]==candidates[i-1]) continue;
            if(candidates[i]>target) break;
            curr.push_back(candidates[i]);
            backtrack(candidates,target-candidates[i],res,curr, i+1);
            curr.pop_back();
        }
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> res;
        vector<int> curr;
        sort(candidates.begin(), candidates.end());  
        backtrack(candidates, target, res, curr, 0);
        return res;
    }
};
