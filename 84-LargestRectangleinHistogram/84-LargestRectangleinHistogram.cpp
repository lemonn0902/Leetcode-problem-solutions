// Last updated: 8/7/2025, 11:55:54 PM
class Solution {
public:
    vector<int> findNSE(vector<int>& heights){
        stack<int> st;
        vector<int> res;
        int n=heights.size();
        for(int i=n-1;i>=0;i--){
            while(!st.empty()&& heights[i]<=heights[st.top()]){
                st.pop();
            }
            if(st.empty()) res.push_back(n);
            else res.push_back(st.top());
            st.push(i);
        }
        reverse(res.begin(),res.end());
        return res;
    }
    vector<int> findPSE(vector<int>& heights){
        stack<int> st;
        vector<int> res;
        int n=heights.size();
        for(int i=0;i<n;i++){
            while(!st.empty()&& heights[i]<=heights[st.top()]){
                st.pop();
            }
            if(st.empty()) res.push_back(-1);
            else res.push_back(st.top());
            st.push(i);
        }
        return res;
    }
    int largestRectangleArea(vector<int>& heights) {
        vector<int> nse=findNSE(heights);
        vector<int> pse=findPSE(heights);
        int maxArea=INT_MIN;
        for(int i=0;i<heights.size();i++){
            int w=nse[i]-pse[i]-1;
            int area = heights[i] * w;
            maxArea=max(maxArea, area);
        }
        return maxArea;
    }
};