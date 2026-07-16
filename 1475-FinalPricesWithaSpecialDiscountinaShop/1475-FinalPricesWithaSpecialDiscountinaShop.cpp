// Last updated: 7/17/2026, 12:19:03 AM
1class Solution {
2public:
3    vector<int> finalPrices(vector<int>& prices) {
4        int n=prices.size();
5        vector<int>res(n);
6        stack<int> st;
7        for(int i=n-1;i>=0;i--){
8            while(!st.empty() && st.top()>prices[i]){
9                st.pop();
10            }
11            res[i] = (st.empty())?0: st.top();
12            st.push(prices[i]);
13        }
14        for(int i=0;i<n;i++){
15            prices[i]=prices[i]-res[i];
16        }
17        return prices;
18    }
19};