// Last updated: 7/2/2025, 12:54:32 AM
class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int, vector<int>, greater<int>> pq(nums.begin(),nums.end());
        while(pq.size()>k){
            pq.pop();
        }
        return pq.top();
    }
};