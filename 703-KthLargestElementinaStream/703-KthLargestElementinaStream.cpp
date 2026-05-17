// Last updated: 5/17/2026, 11:50:31 AM
1class KthLargest {
2public:
3priority_queue<int, vector<int>, greater<int>> pq;
4int num;
5    KthLargest(int k, vector<int>& nums) {
6        num=k;
7        for(int n:nums) pq.push(n);
8
9    }
10    
11    int add(int val) {
12        pq.push(val);
13        while(pq.size()>num) pq.pop();
14        return pq.top();
15    }
16};
17
18/**
19 * Your KthLargest object will be instantiated and called as such:
20 * KthLargest* obj = new KthLargest(k, nums);
21 * int param_1 = obj->add(val);
22 */