// Last updated: 7/31/2025, 6:38:48 PM
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mpp;
        for(int i=0;i<nums.size();i++){
            mpp[nums[i]]++;
        }
        vector<int> ans;
        priority_queue<pair<int,int>> pq;
        for(auto& a:mpp){
            pq.push({a.second, a.first});
        }
        while(k){
            ans.push_back(pq.top().second);
            pq.pop();
            k--;
        }
        return ans;
    }
};