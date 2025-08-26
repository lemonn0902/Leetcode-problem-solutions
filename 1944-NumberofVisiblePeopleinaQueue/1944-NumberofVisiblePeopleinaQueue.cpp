// Last updated: 8/26/2025, 1:35:50 PM
class Solution {
public:
    vector<int> canSeePersonsCount(vector<int>& heights) {
        int n=heights.size();
        vector<int> ans(n,-1);
        stack<int> st;
        
        for(int i=n-1;i>=0;i--){
            int count=0;
            while(!st.empty()&&st.top()<heights[i]){
                st.pop();
                count++;
            }
            if(!st.empty()) count++;
            ans[i]=count;
            st.push(heights[i]);
        }
        return ans;
    }
};