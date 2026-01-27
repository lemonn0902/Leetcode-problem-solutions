// Last updated: 1/27/2026, 5:25:57 PM
1class Solution {
2public:
3    int maxSubArray(vector<int>& nums) {
4        int maxi=INT_MIN;
5        int sum=0;
6        int n=nums.size();
7        for(int i=0;i<n;i++){
8            sum+=nums[i];
9            maxi=max(maxi, sum);
10            if(sum<0) sum=0;
11        }
12        return maxi;
13    }
14};