// Last updated: 3/6/2025, 10:55:35 PM
class Solution {
public:
    void backtrack(vector<int>& candidates, int target, int start,vector<vector<int>>& ans, vector<int>& current ){
        //base case:
        if(target==0){
            ans.push_back(current);
            return;
        }
        for(int i=start;i<candidates.size();i++){
            if(candidates[i]>target){
                continue;
            }
            current.push_back(candidates[i]);
            backtrack(candidates, target-candidates[i], i,ans,current );
            current.pop_back();
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        
        vector<vector<int>> ans;
        vector<int> current;
        backtrack(candidates, target, 0, ans, current);
        return ans;
    }

};