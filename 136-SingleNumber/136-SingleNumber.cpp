// Last updated: 1/27/2026, 12:30:01 AM
1class Solution {
2public:
3    int singleNumber(vector<int>& nums) {
4        int xorr=0;
5        int n=nums.size();
6        for(int i=0;i<n;i++){
7            xorr=xorr^nums[i];
8        }
9        return xorr;
10    }
11};