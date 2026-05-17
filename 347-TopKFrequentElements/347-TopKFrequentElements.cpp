// Last updated: 5/17/2026, 2:50:42 PM
1class Solution {
2public:
3    vector<int> topKFrequent(vector<int>& nums, int k) {
4        unordered_map<int,int> freq;
5        for(int n : nums)
6            freq[n]++;
7
8        priority_queue<pair<int,int>> pq;
9        for(auto it : freq){
10            pq.push({it.second, it.first}); 
11        }
12        vector<int> ans;
13        while(k--){
14            ans.push_back(pq.top().second); 
15            pq.pop();
16        }
17        return ans;
18    }
19};