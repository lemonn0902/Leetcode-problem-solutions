// Last updated: 8/4/2026, 12:04:53 PM
1class Solution {
2public:
3    vector<int> findMissingElements(vector<int>& nums) {
4        sort(nums.begin(), nums.end());
5        int start =nums[0], end=nums[nums.size()-1];
6        vector<int> res;
7        for(int i=start;i<=end;i++){
8            if(find(nums.begin(), nums.end(), i) == nums.end())
9            res.push_back(i);
10        }
11        return res;
12    }
13};