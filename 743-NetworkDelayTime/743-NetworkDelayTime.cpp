// Last updated: 8/13/2026, 7:59:15 PM
1class Solution {
2public:
3    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
4        vector<vector<pair<int,int>>> adj(n+1);
5        for(auto& e:times){
6            adj[e[0]].push_back({e[1], e[2]});
7        }
8        priority_queue< pair<int,int> , vector<pair<int,int>>, greater<>> pq;
9        pq.push({0,k});
10        vector<int> dist(n+1,INT_MAX);
11        dist[k]=0;
12        while(!pq.empty()){
13            auto [d,node]=pq.top();
14            pq.pop();
15            if(d>dist[node]) continue;
16            for(auto& [next,w]:adj[node]){
17                if(dist[node]+w<dist[next]){
18                    dist[next]= dist[node]+w;
19                    pq.push({dist[next], next});
20                }
21            }
22        }
23        int ans =0;
24        for(int i=1;i<=n;i++){
25            if(dist[i]==INT_MAX) return -1;
26            ans= max(ans, dist[i]);
27        }
28        return ans;
29    }
30};