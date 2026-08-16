// Last updated: 8/16/2026, 4:33:29 PM
1class Solution {
2public:
3    int largestRectangleArea(vector<int>& heights) {
4        stack<pair<int,int>> st; //idx, no
5        int maxi=INT_MIN;
6        for(int i=0;i<heights.size();i++){
7            int start=i;
8            while(!st.empty() && heights[i]<st.top().second){
9                int idx=st.top().first;
10                int h=st.top().second;
11                st.pop();
12                maxi=max(maxi, h*(i-idx));
13                start=idx;
14            }
15            st.push({start, heights[i]});
16        }
17        int n =heights.size();
18        while(!st.empty()){
19            int h=st.top().second;
20            int i=st.top().first;
21            st.pop();
22            maxi=max(maxi, h*(n-i));
23        }
24        return maxi;
25    }
26};