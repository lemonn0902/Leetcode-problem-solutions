// Last updated: 10/25/2025, 8:58:08 PM
class Solution {
public:
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        int V=graph.size();
        vector<vector<int>> rev(V);
        
        for(int i=0;i<V;i++){
            for(auto it: graph[i]){
                rev[it].push_back(i);
            }
        }
        vector<int> indeg(V, 0);
        queue<int> q;
        vector<int> topo;
        for(int i=0;i<V;i++){
            for(auto it:rev[i]) indeg[it]++;
        }
        for(int i=0;i<V;i++){
            if(indeg[i]==0) q.push(i);
        }
        while(!q.empty()){
            int node= q.front();
            q.pop();
            topo.push_back(node);
            for(auto it: rev[node]){
                indeg[it]--;
                if(indeg[it]==0) q.push(it);
            }
        }
        sort(topo.begin(), topo.end());
        return topo;
    }
};