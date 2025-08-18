// Last updated: 8/18/2025, 1:17:11 PM
class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
      if(source==0&&destination==0) return true;
        vector<vector<int>> adj(n);
        //form adj list
        for(auto& e:edges){
          adj[e[0]].push_back(e[1]);
          adj[e[1]].push_back(e[0]);
        }
        queue<int> q;
        vector<int> vis(n,0);
        q.push(source);
        vis[source]=1;
        while(!q.empty()){
          int node= q.front();
          q.pop();
          for(auto it: adj[node]){
            if(it==destination){
              return true;
              
            }
            if(!vis[it]){
              q.push(it);
            vis[it]=1;
            }
            
          }
        }
        return false;
    }
};