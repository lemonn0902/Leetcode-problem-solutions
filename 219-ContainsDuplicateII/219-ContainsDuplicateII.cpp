// Last updated: 3/5/2026, 4:28:05 PM
1class Solution {
2public:
3    bool containsNearbyDuplicate(vector<int>& nums, int k) {
4        unordered_set<int> window;
5        for(int i=0;i<nums.size();i++){
6            if(window.count(nums[i])) return true;
7            window.insert(nums[i]);
8            if(window.size()>k){
9                window.erase(nums[i-k]);
10            }
11        }
12        return false;
13    }
14};