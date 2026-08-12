// Last updated: 8/12/2026, 11:05:50 PM
1class Solution {
2public:
3    int maxSubarrayLength(vector<int>& nums, int k) {
4        int ans = 0;
5        unordered_map<int, int> freq;
6        int l = 0;
7        int r = 0;
8        int n = nums.size();
9        int maxi=0;
10        while (r < n) {
11            freq[nums[r]]++;
12            while (freq[nums[r]] > k) {
13                freq[nums[l]]--;
14                if (freq[nums[l]] == 0)
15                    freq.erase(nums[l]);
16                l++;
17            }
18            maxi=max(maxi, 1+r-l);
19            r++;
20        }
21        return maxi;
22    }
23};