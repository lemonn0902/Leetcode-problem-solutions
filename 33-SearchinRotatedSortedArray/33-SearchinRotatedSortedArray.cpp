// Last updated: 8/15/2026, 10:50:26 PM
1class Solution {
2public:
3    int search(vector<int>& nums, int target) {
4        int n = nums.size();
5        int lo = 0, hi = n - 1;
6
7        while (lo <= hi) {
8            int m = lo + (hi - lo) / 2;
9
10            if (nums[m] == target)
11                return m;
12
13            // Left half is sorted
14            if (nums[lo] <= nums[m]) {
15
16                if (nums[lo] <= target && target < nums[m])
17                    hi = m - 1;
18                else
19                    lo = m + 1;
20            }
21
22            // Right half is sorted
23            else {
24
25                if (nums[m] < target && target <= nums[hi])
26                    lo = m + 1;
27                else
28                    hi = m - 1;
29            }
30        }
31
32        return -1;
33    }
34};