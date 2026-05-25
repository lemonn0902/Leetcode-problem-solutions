// Last updated: 5/26/2026, 12:18:48 AM
1class Solution {
2public:
3    double mincostToHireWorkers(vector<int>& quality, vector<int>& wage,int k) {
4        vector<pair<double, int>> workers;
5        for (int i = 0; i < quality.size(); i++) {
6            workers.push_back({(double)wage[i] / quality[i], quality[i]});
7        }
8        sort(workers.begin(), workers.end());
9        priority_queue<int> pq; // max heap of qualities
10        int qualitySum = 0;
11        double ans = 1e18;
12        for (auto& [ratio, q] : workers) {
13            pq.push(q);
14            qualitySum += q;
15            if (pq.size() > k) {
16                qualitySum -= pq.top();
17                pq.pop();
18            }
19            if (pq.size() == k) {
20                ans = min(ans, ratio * qualitySum);
21            }
22        }
23        return ans;
24    }
25};