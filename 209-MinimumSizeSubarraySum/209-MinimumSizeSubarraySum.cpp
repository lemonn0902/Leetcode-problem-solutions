// Last updated: 8/15/2026, 9:00:39 PM
1class Solution {
2public:
3    int minSubArrayLen(int target, vector<int>& nums) {
4        int mini=INT_MAX;
5        int l=0;
6        int r=0;
7        int n =nums.size();
8        int sum=0;
9        while(r<n){
10            sum+=nums[r];
11            while(sum>=target){
12                if(1+r-l<mini){
13                    mini=1+r-l;
14                }
15                sum=sum-nums[l];
16                l++;
17            }
18            r++;
19        }
20        return mini==INT_MAX?0:mini;
21    }
22};