// Last updated: 3/12/2026, 3:04:52 PM
1class Solution {
2public:
3    int maximumBeauty(vector<int>& nums, int k) {
4        int l=0;
5        int ans=0;
6        sort(nums.begin(), nums.end());
7        for(int r=0;r<nums.size();r++){
8            while(nums[r]-nums[l]>2*k){
9                l++;
10                
11            }
12            ans=max(ans, r-l+1);
13        }
14        return ans;
15
16    }
17};