// Last updated: 8/14/2026, 12:38:55 AM
1class Solution {
2public:
3    const long long MOD = 1e9 + 7;
4
5    long long f(
6        int start,
7        int end,
8        vector<long long>& dp,
9        vector<vector<pair<int, long long>>>& adj,
10        vector<long long>& dist
11    ) {
12        if(start == end)
13            return 1;
14
15        if(dp[start] != -1)
16            return dp[start];
17
18        long long ans = 0;
19
20        for(auto &[next, weight] : adj[start]) {
21
22            if(dist[start] + weight == dist[next]) {
23
24                ans = (ans + f(next, end, dp, adj, dist)) % MOD;
25            }
26        }
27
28        return dp[start] = ans;
29    }
30
31    int countPaths(int n, vector<vector<int>>& roads) {
32
33        vector<vector<pair<int, long long>>> adj(n);
34
35        for(auto& e : roads) {
36            int u = e[0];
37            int v = e[1];
38            long long t = e[2];
39
40            adj[u].push_back({v, t});
41            adj[v].push_back({u, t});
42        }
43
44        // Dijkstra
45        priority_queue<
46            pair<long long, int>,
47            vector<pair<long long, int>>,
48            greater<>
49        > pq;
50
51        vector<long long> dist(n, LLONG_MAX);
52
53        dist[0] = 0;
54        pq.push({0, 0});
55
56        while(!pq.empty()) {
57
58            auto [d, node] = pq.top();
59            pq.pop();
60
61            if(d > dist[node])
62                continue;
63
64            for(auto& [next, time] : adj[node]) {
65
66                if(dist[node] + time < dist[next]) {
67
68                    dist[next] = dist[node] + time;
69
70                    pq.push({dist[next], next});
71                }
72            }
73        }
74
75        vector<long long> dp(n, -1);
76
77        return f(0, n - 1, dp, adj, dist);
78    }
79};