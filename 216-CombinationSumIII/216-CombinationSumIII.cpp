// Last updated: 6/28/2025, 1:25:27 AM
class Solution {
public:
    void backtrack(int k, int n ,int curr, vector<vector<int>>& res, vector<int>& comb,int sum){
        //base case:
        if(comb.size()==k && sum==n){
            res.push_back(comb);
            return;
        }
        if (comb.size() > k || sum > n || curr > 9) return;

        //include 
        comb.push_back(curr);
        backtrack(k,n,curr+1,res,comb,sum+curr);
        //disclude
        comb.pop_back();
        backtrack(k,n,curr+1, res, comb, sum);
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> res;
        vector<int> comb;
        backtrack(k,n,1,res, comb, 0);
        return res;
    }
};