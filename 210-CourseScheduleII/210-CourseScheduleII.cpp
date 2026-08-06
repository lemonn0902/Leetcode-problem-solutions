// Last updated: 8/6/2026, 1:41:32 PM
1class Solution {
2public:
3    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
4        vector<vector<pair<int,int>>> adj(n+1);
5        for(auto& e :times){
6            int s=e[0];
7            int t=e[1];
8            int w=e[2];
9            adj[s].push_back({t,w});
10        }
11        vector<int>dist(n+1,INT_MAX);
12        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<>> pq;
13        dist[k]=0;
14        pq.push({0,k});
15        while(!pq.empty()){
16            auto [d,node]=pq.top();
17            pq.pop();
18            if(d>dist[node]) continue;
19            for(auto [next,w]:adj[node]){
20                if(dist[node]+w<dist[next]){
21                    dist[next]=dist[node]+w;
22                    pq.push({dist[next],next});
23                }
24            }
25        }
26        int ans=0;
27        for(int i=1;i<=n;i++){
28            if(dist[i]==INT_MAX) return -1;
29            ans=max(ans,dist[i]);
30        }
31        return ans;
32    }
33};