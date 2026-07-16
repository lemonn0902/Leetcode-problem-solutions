// Last updated: 7/17/2026, 12:35:04 AM
1class Solution {
2public:
3    vector<int> dailyTemperatures(vector<int>& temperatures) {
4        stack<pair<int,int>> st;
5        int n = temperatures.size();
6        vector<int> ans(n);
7        for(int i=n-1;i>=0;i--){
8            while(!st.empty() && st.top().first<=temperatures[i]){
9                st.pop();
10            }
11
12            ans[i]=(st.empty())?0: st.top().second-i;
13            st.push({temperatures[i],i});
14        }
15        return ans;
16    }
17};