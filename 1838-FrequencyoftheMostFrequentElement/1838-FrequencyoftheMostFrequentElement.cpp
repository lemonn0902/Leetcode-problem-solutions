// Last updated: 3/7/2026, 11:56:34 AM
1class Solution {
2public:
3    int maxFrequency(vector<int>& nums, int k) {
4        sort(nums.begin(), nums.end());
5        int maxi=0; int l=0;
6        long long sum=0;
7        for(int r=0;r<nums.size();r++){
8            sum+=nums[r];
9            while((long long)nums[r] * (r - l + 1) - sum > k){
10                sum-=nums[l];
11                l++;
12            }
13            maxi=max(maxi, r-l+1);
14        }
15        return maxi;
16    }
17};