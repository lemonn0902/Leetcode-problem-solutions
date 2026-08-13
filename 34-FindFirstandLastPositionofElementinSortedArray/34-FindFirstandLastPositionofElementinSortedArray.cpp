// Last updated: 8/13/2026, 3:17:27 PM
1class Solution {
2public:
3    vector<int> searchRange(vector<int>& nums, int target) {
4        int n = nums.size();
5        int first = -1;
6        int lo = 0, hi = n - 1;
7        while (lo <= hi) {
8            int m = lo + (hi - lo) / 2;
9
10            if (nums[m] >= target) {
11                first = m;
12                hi = m - 1;
13            } else {
14                lo = m + 1;
15            }
16        }
17        if (first == -1 || nums[first] != target)
18            return {-1, -1};
19        int last = -1;
20        lo = 0;
21        hi = n - 1;
22        while (lo <= hi) {
23            int m = lo + (hi - lo) / 2;
24
25            if (nums[m] > target) {
26                last = m;
27                hi = m - 1;
28            } else {
29                lo = m + 1;
30            }
31        }
32        if (last == -1)
33            last = n - 1;
34        else
35            last = last - 1;
36
37        return {first, last};
38    }
39};