// Last updated: 8/5/2026, 1:31:12 PM
1class Solution {
2public:
3    void dfs(int node,vector<vector<int>>& adj, vector<bool>& sus){
4        sus[node]=true;
5        for(int next:adj[node]){
6            if(!sus[next])
7            dfs(next,adj,sus);
8        }
9    }
10    vector<int> remainingMethods(int n, int k, vector<vector<int>>& invocations) {
11        vector<vector<int>> adj(n);
12        for(auto& e:invocations){
13            adj[e[0]].push_back(e[1]); //directed
14        }
15        vector<bool> sus(n,false);
16        dfs(k,adj,sus);
17        for(auto& e:invocations){
18            int u=e[0];
19            int v=e[1];
20            if(!sus[u]&&sus[v]){
21                vector<int> ans;
22                for(int i=0;i<n;i++) ans.push_back(i);
23                return ans;
24            }
25        }
26        vector<int> ans;
27        for(int i=0;i<n;i++){
28            if(sus[i]==false) ans.push_back(i);
29        }
30        return ans;
31    }
32};