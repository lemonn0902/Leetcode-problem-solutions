// Last updated: 7/15/2026, 11:38:55 PM
1class CustomStack {
2public:
3    vector<int> arr;
4    int sz;
5    CustomStack(int maxSize) {
6        arr.resize(maxSize);
7        sz=0;
8    }
9    
10    void push(int x) {
11        if(sz==arr.size()) return;
12        arr[sz]=x;
13        sz++;
14    }
15    
16    int pop() {
17        if(sz==0) return -1;
18        sz--;
19        return arr[sz];
20    }
21    
22    void increment(int k, int val) {
23        int cnt=min(k,sz);
24        for(int i=0;i<cnt;i++){
25            arr[i]=arr[i]+val;
26        }
27    }
28};
29
30/**
31 * Your CustomStack object will be instantiated and called as such:
32 * CustomStack* obj = new CustomStack(maxSize);
33 * obj->push(x);
34 * int param_2 = obj->pop();
35 * obj->increment(k,val);
36 */