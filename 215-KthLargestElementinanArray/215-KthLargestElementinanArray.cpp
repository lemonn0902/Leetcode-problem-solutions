// Last updated: 8/16/2026, 1:34:42 AM
1class Solution {
2public:
3    int findKthLargest(vector<int>& nums, int k) {
4        priority_queue<int> pq(nums.begin(), nums.end());
5        while(k!=1){
6            pq.pop();
7            k--;
8
9        }
10        return pq.top();
11    }
12};