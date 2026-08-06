// Last updated: 8/7/2026, 12:26:41 AM
1class Solution {
2public:
3    void solve(vector<int>& nums,vector<vector<int>>& res,vector<int>& curr,vector<bool>& used){
4        if(curr.size()==nums.size()){
5            res.push_back(curr);
6            return;
7        }
8        for(int i=0;i<nums.size();i++){
9            if(used[i]) continue;
10            if(i > 0 && nums[i] == nums[i-1] && !used[i-1]) continue;
11            used[i]=true;
12            curr.push_back(nums[i]);
13            solve(nums,res,curr,used);
14            used[i]=false;
15            curr.pop_back();
16        }
17    }
18    vector<vector<int>> permuteUnique(vector<int>& nums) {
19        sort(nums.begin(), nums.end());
20        vector<vector<int>> res;
21        vector<int> curr;
22        int n=nums.size();
23        vector<bool> used(n,false);
24        solve(nums, res, curr, used);
25        return res;
26    }
27};