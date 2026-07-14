// Last updated: 7/14/2026, 10:51:58 PM
1class MinStack {
2public:
3    stack<int> st;
4    stack<int> minSt;
5    MinStack() {
6        
7    }
8    
9    void push(int value) {
10        st.push(value);
11        if(minSt.empty()) minSt.push(value);
12        else minSt.push(min(minSt.top(), value));
13    }
14    
15    void pop() {
16        st.pop();
17        minSt.pop();
18    }
19    
20    int top() {
21        return st.top();
22    }
23    
24    int getMin() {
25        return minSt.top();
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