// Last updated: 8/8/2025, 12:13:50 AM
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
    int calcArea(vector<int>& heights) {
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
    int maximalRectangle(vector<vector<char>>& matrix) {
        int m=matrix.size();
        int n= matrix[0].size();
        int maxArea=0;
        vector<int> heights(n,0);
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(matrix[i][j]=='1') heights[j]++;
                else heights[j]=0;
            }
            int area=calcArea(heights);
            maxArea=max(maxArea, area);

        }
        return maxArea;
    }
};