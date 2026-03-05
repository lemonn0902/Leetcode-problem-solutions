// Last updated: 3/5/2026, 3:55:33 PM
1class Solution {
2public:
3    int minSubArrayLen(int target, vector<int>& nums) {
4        int ans=INT_MAX;
5        int l=0, r=0;
6        int n=nums.size();
7        int sum=0;
8        while(r<n){
9            sum+=nums[r];
10            while(sum>=target){
11                ans=min(ans, r-l+1);
12                sum=sum-nums[l];
13                l++;
14            }
15            r++;
16        }
17        return ans==INT_MAX?0:ans;
18    }
19};