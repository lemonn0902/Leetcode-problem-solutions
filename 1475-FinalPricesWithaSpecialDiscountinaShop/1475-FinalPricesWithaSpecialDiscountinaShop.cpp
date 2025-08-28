// Last updated: 8/28/2025, 12:41:21 PM
class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        int n=prices.size();
        vector<int> ans(n);
        stack<int> st;
        
        for(int i=n-1;i>=0;i--){
            
            while(!st.empty()&&st.top()>prices[i]){
                
                st.pop();
            }
            if(!st.empty()) {
                ans[i]=prices[i]-st.top();
            } 
            else {
                ans[i]=prices[i];
            }
            st.push(prices[i]);
        }
        
        return ans;
    }
};