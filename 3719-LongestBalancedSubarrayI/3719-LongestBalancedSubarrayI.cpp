// Last updated: 7/7/2026, 3:56:06 PM
1class Solution {
2public:
3    int longestBalanced(vector<int>& nums) {
4        int n = nums.size();
5        int maxi = 0;
6
7        for (int i = 0; i < n; i++) {
8            unordered_set<int> odd, even;
9
10            for (int j = i; j < n; j++) {
11                if (nums[j] % 2 == 0)
12                    even.insert(nums[j]);
13                else
14                    odd.insert(nums[j]);
15
16                if (odd.size() == even.size())
17                    maxi = max(maxi, j - i + 1);
18            }
19        }
20
21        return maxi;
22    }
23};