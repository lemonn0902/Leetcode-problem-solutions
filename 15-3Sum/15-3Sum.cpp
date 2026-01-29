// Last updated: 1/29/2026, 10:05:18 PM
1class Solution {
2public:
3    vector<vector<int>> threeSum(vector<int>& nums) {
4        vector<vector<int>> res;
5        sort(nums.begin(), nums.end());
6        int n = nums.size();
7        for (int i = 0; i < n; i++) {
8            if (i > 0 && nums[i] == nums[i - 1])
9                continue;
10            int l = i + 1;
11            int r = n - 1;
12            while (l < r) {
13                int sum = nums[i] + nums[l] + nums[r];
14                if (sum == 0) {
15                    res.push_back({nums[i], nums[l], nums[r]});
16                    l++;
17                    r--;
18                    while (l < r && nums[l] == nums[l - 1])
19                        l++;
20                    while (l < r && nums[r] == nums[r + 1])
21                        r--;
22                } else if (sum < 0) {
23                    l++;
24                } else
25                    r--;
26            }
27        }
28        return res;
29    }
30};