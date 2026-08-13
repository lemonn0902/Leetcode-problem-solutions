// Last updated: 8/13/2026, 11:30:17 PM
1class Solution {
2public:
3    double maxProbability(int n, vector<vector<int>>& edges, vector<double>& succProb, int start_node, int end_node) {
4        vector<vector<pair<int,double>>> adj(n);
5        for(int i=0;i<edges.size();i++){
6            int u=edges[i][0];
7            int v=edges[i][1];
8            double p=succProb[i];
9            adj[u].push_back({v,p});
10            adj[v].push_back({u,p});
11        }
12        vector<double> dist(n, 0.0);
13        priority_queue<pair<double,int>> pq;
14        pq.push({1.0,start_node});
15        dist[start_node]=1.0;
16        while(!pq.empty()){
17            auto [d,node]= pq.top();
18            pq.pop();
19            if(d<dist[node]) continue;
20            for(auto& [next,prob]:adj[node]){
21                if(dist[node]*prob>dist[next]){
22                    dist[next]=dist[node]*prob;
23                    pq.push({dist[next],next});
24                }
25            }
26        }
27        double ans= dist[end_node];
28        if(ans==0.0) return 0;
29        else return ans;
30    }
31};