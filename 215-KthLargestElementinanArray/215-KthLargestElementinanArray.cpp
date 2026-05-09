// Last updated: 5/10/2026, 12:52:45 AM
1class Solution {
2public:
3    int findKthLargest(vector<int>& nums, int k) {
4        priority_queue<int, vector<int>, greater<int>> pq(nums.begin(), nums.end());
5        while(pq.size()>k) pq.pop();
6        return pq.top();
7    }
8};