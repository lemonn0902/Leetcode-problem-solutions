// Last updated: 8/16/2026, 1:28:49 AM
1class Solution {
2public:
3    vector<int> topKFrequent(vector<int>& nums, int k) {
4        priority_queue<pair<int,int>> pq;
5        unordered_map<int,int> mpp;
6        for(int x:nums){
7            mpp[x]++;
8        }
9        for(auto& it: mpp){
10            pq.push({it.second, it.first});
11        }
12        vector<int> ans;
13        while(k--){
14            int curr=pq.top().second;
15            pq.pop();
16            ans.push_back(curr);
17        }
18        return ans;
19    }
20};