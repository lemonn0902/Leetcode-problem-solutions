// Last updated: 8/16/2026, 12:48:04 AM
1class Solution {
2public:
3    int maxWidthRamp(vector<int>& nums) {
4        stack<int> st;
5        int n=nums.size();
6        for(int i=0;i<n;i++){
7            if(st.empty()||nums[st.top()]>nums[i]){
8                st.push(i);
9            }
10        }
11        int ans =0;
12        for(int j=n-1;j>=0;j--){
13            while (!st.empty() && nums[st.top()] <= nums[j]) {
14                ans=max(ans, j-st.top());
15                st.pop();
16            }
17
18        }
19        return ans;
20    }
21};