// Last updated: 8/12/2026, 12:29:51 AM
1class Solution {
2public:
3    vector<int> dailyTemperatures(vector<int>& temperatures) {
4        int n = temperatures.size();
5        stack<int> st;
6        vector<int> ans(n, 0);
7        for (int i = n - 1; i >= 0; i--) {
8            while (!st.empty() && temperatures[st.top()] <= temperatures[i]) {
9                st.pop();
10            }
11            if (!st.empty()) {
12                ans[i] = st.top() - i;
13            }
14            st.push(i);
15        }
16        return ans;
17    }
18};