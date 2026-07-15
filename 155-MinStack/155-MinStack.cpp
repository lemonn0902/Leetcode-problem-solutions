// Last updated: 7/15/2026, 8:38:54 PM
1class MinStack {
2public:
3    stack<pair<int,int>> st;
4    MinStack() {
5        
6    }
7    
8    void push(int value) {
9        if(st.empty()) st.push({value,value});
10        else{
11            int currMin= min(st.top().second,value);
12            st.push({value, currMin});
13        }
14    }
15    
16    void pop() {
17        st.pop();
18    }
19    
20    int top() {
21        return st.top().first;
22    }
23    
24    int getMin() {
25        return st.top().second;
26    }
27};
28
29/**
30 * Your MinStack object will be instantiated and called as such:
31 * MinStack* obj = new MinStack();
32 * obj->push(value);
33 * obj->pop();
34 * int param_3 = obj->top();
35 * int param_4 = obj->getMin();
36 */