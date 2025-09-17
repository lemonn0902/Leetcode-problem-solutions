// Last updated: 9/18/2025, 1:16:04 AM
class Solution {
public:
    void backtrack(vector<int>& nums, vector<int>& curr, vector<vector<int>> &res, int n, vector<bool>& vis){
        
        if(curr.size()==n){
            res.push_back(curr);
            return;
        }
        for(int i=0;i<n;i++){
            if(vis[i]==false){
                curr.push_back(nums[i]);
            vis[i]=true;
            backtrack(nums, curr, res,n,vis);
            curr.pop_back();
            vis[i]=false;
            }
            
            
        }


    }
    vector<vector<int>> permute(vector<int>& nums) {
       vector<int> curr;
       vector<vector<int>> res;
       int n=nums.size();
       vector<bool> vis(n,false);
       backtrack(nums, curr, res,n, vis);
       return res; 
    }
};