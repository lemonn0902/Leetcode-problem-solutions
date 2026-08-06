// Last updated: 8/7/2026, 12:02:46 AM
1class Solution {
2public:
3    void solve(vector<int>& nums,vector<vector<int>>& res,vector<int>& curr ,vector<bool>& used){
4        if(curr.size()==nums.size()){
5            res.push_back(curr);
6            return;
7        }
8        for(int i=0;i<nums.size();i++){
9            if(used[i]) continue;
10            used[i]=true;
11            curr.push_back(nums[i]);
12            solve(nums,res,curr, used);
13            curr.pop_back();
14            used[i]=false;
15        }
16    }
17    vector<vector<int>> permute(vector<int>& nums) {
18        vector<vector<int>> res;
19        vector<int> curr;
20        int n=nums.size();
21        vector<bool> used(n,false);
22        solve(nums, res, curr, used);
23        return res;
24    }
25};