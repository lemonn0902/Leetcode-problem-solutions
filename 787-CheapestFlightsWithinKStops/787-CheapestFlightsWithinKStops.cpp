// Last updated: 8/6/2026, 2:11:47 PM
1class Solution {
2public:
3    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
4        vector<int> dist(n,INT_MAX);
5        dist[src]=0;
6        for(int i=0;i<=k;i++){
7            vector<int> temp=dist;
8            for(auto& e:flights){
9                int u=e[0];
10                int v=e[1];
11                int p=e[2];
12                if(dist[u]!=INT_MAX && dist[u]+p<temp[v]) temp[v]=dist[u]+p;
13
14            }
15            dist=temp;
16        }
17        if(dist[dst]==INT_MAX) return -1;
18        return dist[dst];
19    }
20};