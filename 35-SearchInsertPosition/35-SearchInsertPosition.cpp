// Last updated: 8/13/2026, 12:48:37 PM
1class Solution {
2public:
3    int searchInsert(vector<int>& nums, int target) {
4        int n =nums.size();
5        int lo=0, hi =n;
6        while(lo<hi){
7            int m = lo+(hi-lo)/2;
8            if(nums[m]<target) lo=m+1;
9            else hi=m;
10        }
11        return lo;
12    }
13};