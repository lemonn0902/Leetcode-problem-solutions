// Last updated: 3/7/2026, 11:06:33 AM
1class Solution {
2public:
3    int longestSubarray(vector<int>& nums) {
4        int zeroCount=0;
5        int l=0, r=0;
6        int n=nums.size();
7        int maxi=0;
8        while(r<n){
9            if(nums[r]==0) zeroCount++;
10            while(zeroCount>1){
11                if(nums[l]==0) zeroCount--;
12                l++;
13            }
14            maxi=max(maxi, r-l+1);
15            r++;
16        }
17        return maxi-1;
18    }
19};