// Last updated: 7/30/2026, 12:56:42 AM
1class Solution {
2public:
3    vector<int> nextGreaterElements(vector<int>& nums) {
4        int n = nums.size();
5        vector<int> res(n, -1);
6        stack<int> st;
7        for (int i = 2 * n - 1; i >= 0; i--) {
8            while (!st.empty() && st.top() <= nums[i % n]) {
9                st.pop();
10            }
11            if (i < n) {
12                if (!st.empty())
13                    res[i] = st.top();
14            }
15            st.push(nums[i % n]);
16        }
17        return res;
18    }
19};