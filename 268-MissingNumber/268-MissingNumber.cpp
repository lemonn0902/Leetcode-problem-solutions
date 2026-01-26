// Last updated: 1/27/2026, 12:16:09 AM
1class Solution {
2public:
3    int missingNumber(vector<int>& nums) {
4        sort(nums.begin(), nums.end());
5        int n=nums.size();
6        for(int i=0;i<n;i++){
7            if(nums[i]!=i){
8                return i;
9            }
10        }
11        return n;
12    }
13};