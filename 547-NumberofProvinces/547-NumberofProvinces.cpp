// Last updated: 8/17/2025, 10:47:38 PM
class Solution {
public:
    void dfs(int node,vector<vector<int>>& isConnected, vector<int>& vis){
        vis[node]=1;
        for(int i=0;i<isConnected.size();i++){
            if(isConnected[node][i]==1&&!vis[i]){
                dfs(i,isConnected,vis);
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n= isConnected.size();
        int ans=0;
        vector<int> vis(n);
        for(int i=0;i<n;i++){
            if(vis[i]==0){
                dfs(i, isConnected, vis);
                ans++;
            }
        }
        return ans;
    }
};