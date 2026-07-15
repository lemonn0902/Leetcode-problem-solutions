// Last updated: 7/15/2026, 9:12:45 PM
1class StockSpanner {
2public:
3    stack<pair<int,int>> st;
4    StockSpanner() {
5
6    }
7    
8    int next(int price) {
9        int span =1;
10        while(!st.empty()&& st.top().first<=price){
11            span+=st.top().second;
12            st.pop();
13        }
14        st.push({price,span});
15        return span;
16
17    }
18};
19
20/**
21 * Your StockSpanner object will be instantiated and called as such:
22 * StockSpanner* obj = new StockSpanner();
23 * int param_1 = obj->next(price);
24 */