// Last updated: 8/16/2026, 2:39:17 PM
1class Solution {
2public:
3    int largestRectangleArea(vector<int>& heights) {
4        stack<pair<int,int>> st; //index, no
5        int n=heights.size();
6        int maxi=INT_MIN;
7        for(int i=0;i<n;i++){
8            int start=i;
9            while(!st.empty() && heights[i]<st.top().second){
10                int idx= st.top().first;
11                int h=st.top().second;
12                st.pop();
13                maxi=max(maxi, h*(i-idx));
14                start=idx;
15            }
16            st.push({start, heights[i]});
17        }
18        while (!st.empty()) {
19            int index = st.top().first;
20            int height = st.top().second;
21            st.pop();
22
23            maxi = max(maxi, height * (n - index));
24        }
25        return maxi;
26    }
27};