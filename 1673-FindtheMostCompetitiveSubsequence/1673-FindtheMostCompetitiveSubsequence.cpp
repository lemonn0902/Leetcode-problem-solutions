// Last updated: 7/17/2026, 1:10:07 AM
1class Solution {
2public:
3    vector<int> mostCompetitive(vector<int>& nums, int k) {
4        int n = nums.size();
5        vector<int> ans;
6        stack<int> st;
7        for(int i=0;i<n;i++){
8            while(!st.empty()&& st.top()>nums[i] && n-i>k-st.size()){
9                st.pop();
10            }
11            if(st.size()<k) st.push(nums[i]);
12        }
13        while(!st.empty()){
14            ans.push_back(st.top());
15            st.pop();
16        }
17        reverse(ans.begin(), ans.end());
18        return ans;
19    }
20};