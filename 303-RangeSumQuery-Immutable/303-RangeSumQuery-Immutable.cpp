// Last updated: 7/7/2026, 5:06:48 PM
1class NumArray {
2public:
3    vector<int> prefix;
4    NumArray(vector<int>& nums) {
5        int n=nums.size();
6        prefix.resize(n + 1, 0);
7        for(int i=0;i<n;i++){
8            prefix[i+1]=prefix[i]+nums[i];
9        }
10    }
11    
12    int sumRange(int left, int right) {
13        return prefix[right+1]-prefix[left];
14    }
15};
16
17/**
18 * Your NumArray object will be instantiated and called as such:
19 * NumArray* obj = new NumArray(nums);
20 * int param_1 = obj->sumRange(left,right);
21 */