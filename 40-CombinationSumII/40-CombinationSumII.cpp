class Solution {
public:
    void backtrack(vector<int>& candidates, int target, vector<vector<int>>& res, vector<int>& current,int start ){
        //base case:
        if(target==0){
            res.push_back(current);
            return;
        }
        for(int i=start;i<candidates.size();i++){
            if(candidates[i]>target){
                continue;
            }
            if(i>start && candidates[i]==candidates[i-1])
            continue;
            current.push_back(candidates[i]);
            backtrack(candidates, target-candidates[i], res, current,i+1);
            current.pop_back();
        }

    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<vector<int>> res;
        vector<int> current;
        backtrack(candidates, target, res, current, 0);
        return res;
    }

};