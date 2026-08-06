// Last updated: 8/6/2026, 11:27:03 PM
1class Solution {
2public:
3    void getSubsets(vector<int>& nums, int index, vector<vector<int>>& res,
4                    vector<int>& current) {
5        // base case:
6        if (index == nums.size()) {
7            if(find(res.begin(), res.end(),current)==res.end()){
8                res.push_back(current);
9            }
10            
11            return;
12        }
13
14        current.push_back(nums[index]);
15        getSubsets(nums, index + 1, res, current);
16        current.pop_back();
17        getSubsets(nums, index + 1,  res, current);
18    }
19    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
20        sort(nums.begin(), nums.end());
21        vector<vector<int>> res;
22        vector<int> current;
23        getSubsets(nums, 0, res, current);
24        return res;
25    }
26};