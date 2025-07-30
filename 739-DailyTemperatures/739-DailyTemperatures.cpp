// Last updated: 7/30/2025, 12:49:31 PM
class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> res;
        stack<pair<int,int>> st;
        int n= temperatures.size();
        for(int i=n-1;i>=0;i--){
            while(!st.empty()&& st.top().first<=temperatures[i]){
                st.pop();
            }
            if(st.empty()){
                res.push_back(0);
            }
            else{
                res.push_back(st.top().second-i);
            }
            st.push({temperatures[i], i});
        }
        
        reverse(res.begin(), res.end());
        return res;
    }
};