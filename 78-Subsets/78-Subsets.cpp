// Last updated: 8/6/2026, 6:57:52 PM
1class Solution {
2public:
3    void backtrack(vector<int>& nums,vector<vector<int>>& res,int n,int i,vector<int>& sub){
4        if(i==n){
5            res.push_back(sub);
6            return;
7        }
8        sub.push_back(nums[i]);
9        backtrack(nums, res,n,i+1, sub);
10        sub.pop_back();
11        backtrack(nums, res, n, i+1,sub);
12    }
13    vector<vector<int>> subsets(vector<int>& nums) {
14        vector<vector<int>> ans;
15        vector<int> curr;
16        int n = nums.size();
17        backtrack(nums, ans , n, 0, curr);
18        return ans;
19    }
20};