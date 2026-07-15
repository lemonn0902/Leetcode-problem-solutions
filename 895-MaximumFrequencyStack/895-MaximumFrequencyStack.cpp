// Last updated: 7/16/2026, 1:18:03 AM
1class FreqStack {
2public:
3    unordered_map<int,int> mpp;
4    stack<int> st;
5    FreqStack() {
6        
7    }
8    
9    void push(int val) {
10        st.push(val);
11        mpp[val]++;
12    }
13    
14    int pop() {
15        int maxi=0;
16        for(auto it:mpp){
17            maxi=max(maxi, it.second);
18        }
19        stack<int> temp;
20        int ans = -1;
21        // Find the first element from the top with max frequency
22        while (!st.empty()) {
23            if (mpp[st.top()] == maxi) {
24                ans = st.top();
25                mpp[ans]--;
26                st.pop();
27                break;
28            }
29            temp.push(st.top());
30            st.pop();
31        }
32        // Restore the remaining elements
33        while (!temp.empty()) {
34            st.push(temp.top());
35            temp.pop();
36        }
37
38        return ans;
39    }
40};
41
42/**
43 * Your FreqStack object will be instantiated and called as such:
44 * FreqStack* obj = new FreqStack();
45 * obj->push(val);
46 * int param_2 = obj->pop();
47 */