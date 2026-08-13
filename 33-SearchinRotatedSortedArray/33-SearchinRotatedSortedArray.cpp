// Last updated: 8/13/2026, 4:34:39 PM
1class Solution {
2public:
3    int search(vector<int>& nums, int target) {
4        int n = nums.size();
5        int lo=0, hi=n-1;
6        while(lo<=hi){
7            int mid = lo+(hi-lo)/2;
8            if(nums[mid]==target) return mid;
9            if(nums[mid]>=nums[lo]){
10                //sorted half = first
11                if(nums[lo]<=target && target< nums[mid]) hi=mid-1;
12                else lo=mid+1; 
13
14            }
15            else{
16                //sorted half = second
17                if(nums[mid]< target && target <= nums[hi]) lo=mid+1;
18                else hi=mid-1;
19            }
20        }
21        return -1;
22    }
23};