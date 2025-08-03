// Last updated: 8/3/2025, 6:25:21 PM
class Solution {
public:
    void backtrack(int start, int n, int k, vector<vector<int>>& res, vector<int>& current){
        //base case:
        if(current.size()==k){
            res.push_back(current);
            return;
        }
        for(int num= start;num<=n;num++){
            current.push_back(num);
            backtrack(num+1,n,k,res,current);
            current.pop_back();
        }

    }
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> res;
        vector<int> current;
        backtrack(1,n, k, res, current);
        return res;
    }
};