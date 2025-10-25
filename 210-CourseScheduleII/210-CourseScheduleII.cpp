// Last updated: 10/25/2025, 8:31:27 PM
class Solution {
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int>> adj(numCourses);
        int m= prerequisites.size();
        for(int i=0;i<m;i++){
            adj[prerequisites[i][1]].push_back(prerequisites[i][0]);
        }
        queue<int> q;
        vector<int> topo;
        vector<int> indeg(numCourses, 0);
        for(int i=0;i<numCourses;i++){
            for(auto it: adj[i]) indeg[it]++;
        }
        for(int i=0;i<numCourses;i++){
            if(indeg[i]==0) q.push(i);
        }
        int count=0;
        while(!q.empty()){
            int node= q.front();
            q.pop();
            count++;
            topo.push_back(node);
            for(auto it: adj[node]){
                indeg[it]--;
                if(indeg[it]==0) q.push(it);
            }
        }
        if(count!=numCourses) return {};
        return topo;
    }
};