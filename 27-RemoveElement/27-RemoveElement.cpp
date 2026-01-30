// Last updated: 1/30/2026, 7:09:55 PM
1class Solution {
2public:
3    int removeElement(vector<int>& nums, int val) {
4        int idx=0;
5        for(int i=0;i<nums.size();i++){
6            if(nums[i]!=val){
7                swap(nums[idx], nums[i]);
8                idx++;
9            }
10        }
11        return idx;
12    }
13};