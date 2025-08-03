// Last updated: 8/3/2025, 6:24:56 PM
class Solution {
public:
    void backtrack(int start,int n, int k, vector<int> curr,vector<vector<int>>& res){
        if(curr.size()==k){
            res.push_back(curr);
            return;
        }
        for(int i=start;i<=n;i++){
            
            curr.push_back(i);
            backtrack(i+1,n,k,curr,res);
            curr.pop_back();
        }
    }
    vector<vector<int>> combine(int n, int k) {
        vector<int> curr;
        vector<vector<int>> res;
        backtrack(1,n, k, curr, res);
        return res;
    }
};