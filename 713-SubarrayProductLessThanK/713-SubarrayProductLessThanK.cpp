// Last updated: 3/6/2026, 7:21:41 PM
1class Solution {
2public:
3    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
4        if(k<=1) return 0;
5        int l=0, r=0;
6        int n=nums.size();
7        int prod=1;
8        int res=0;
9        while(r<n){
10            prod=prod*nums[r];
11            while(prod>=k){
12                prod=prod/nums[l];
13                l++;
14            }
15            res+=(r-l+1);
16            r++;
17        }
18        return res;
19    }
20};