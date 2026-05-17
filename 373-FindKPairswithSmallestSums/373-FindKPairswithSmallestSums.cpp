// Last updated: 5/17/2026, 4:22:27 PM
1class Solution {
2public:
3    vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2,
4                                       int k) {
5        vector<vector<int>> ans;
6        if (nums1.empty() || nums2.empty())
7            return ans;
8        priority_queue<tuple<int, int, int>, vector<tuple<int, int, int>>,
9                       greater<tuple<int, int, int>>>
10            pq;
11        set<pair<int, int>> vis;
12        pq.push({nums1[0] + nums2[0], 0, 0});
13        vis.insert({0, 0});
14        while (k-- && !pq.empty()) {
15            auto [sum, i, j] = pq.top();
16            pq.pop();
17            ans.push_back({nums1[i], nums2[j]});
18            if (i + 1 < nums1.size() && !vis.count({i + 1, j})) {
19                pq.push({nums1[i + 1] + nums2[j], i + 1, j});
20                vis.insert({i + 1, j});
21            }
22            if (j + 1 < nums2.size() && !vis.count({i, j + 1})) {
23                pq.push({nums1[i] + nums2[j + 1], i, j + 1});
24                vis.insert({i, j + 1});
25            }
26        }
27        return ans;
28    }
29};