// Last updated: 3/5/2026, 4:12:23 PM
1class Solution {
2public:
3    bool containsNearbyDuplicate(vector<int>& nums, int k) {
4        unordered_map<int, int> mpp;
5        for(int i=0;i<nums.size();i++){
6            if(mpp.count(nums[i]) && i-mpp[nums[i]]<=k) return true;
7            mpp[nums[i]]=i;
8        }
9        return false;
10    }
11};