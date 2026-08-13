// Last updated: 8/13/2026, 4:53:41 PM
1class Solution {
2public:
3    int findMin(vector<int>& nums) {
4        int n = nums.size();
5        int lo=0, hi=n-1;
6        int mini=INT_MAX;
7        while(lo<=hi){
8            int mid = lo+(hi-lo)/2;
9            if(nums[mid]>=nums[lo]){
10                mini= min(mini,nums[lo] );
11                lo=mid+1;
12            }
13            else {
14                mini=min(mini, nums [mid]);
15                hi=mid-1;
16            }
17        }
18        return mini;
19    }
20};