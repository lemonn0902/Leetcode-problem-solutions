// Last updated: 1/30/2026, 6:52:58 PM
1class Solution {
2public:
3    int removeDuplicates(vector<int>& nums) {
4        int idx=0;
5        for(int i=1;i<nums.size();i++){
6            if(nums[idx]!=nums[i]){
7                idx++;
8                swap(nums[idx], nums[i]);
9            }
10        }
11        return idx+1;
12    }
13};