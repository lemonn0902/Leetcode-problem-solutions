// Last updated: 8/4/2026, 7:46:05 PM
1class Solution {
2public:
3    void dfs(int node, vector<vector<int>>& isConnected,vector<int>& vis){
4        vis[node]=1;
5        for(int i=0;i<isConnected.size();i++){
6            if(isConnected[node][i]==1&&!vis[i]){
7                dfs(i,isConnected,vis);
8            }
9        }
10    }
11    int findCircleNum(vector<vector<int>>& isConnected) {
12        int n=isConnected.size();
13        vector<int> vis(n,0);
14        int ans=0;
15        for(int i=0;i<n;i++){
16            if(vis[i]==0){
17                dfs(i, isConnected,vis);
18                ans++;
19            }
20        }
21        return ans;
22        
23    }
24};