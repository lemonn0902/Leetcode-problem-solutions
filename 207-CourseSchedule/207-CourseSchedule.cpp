// Last updated: 10/25/2025, 4:52:55 PM
class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        int m=prerequisites.size();
        vector<vector<int>> adj(numCourses);
        for(int i=0;i<m;i++){
            adj[prerequisites[i][1]].push_back(prerequisites[i][0]);
        }
        vector<int> indegree(numCourses, 0);
        queue<int> q;
        vector<int> topo;
        for(int i=0;i<numCourses;i++){
            for(auto it: adj[i]) indegree[it]++;
        }
        for(int i=0;i<numCourses;i++){
            if(indegree[i]==0) q.push(i);
        }
        int count=0;
        while(!q.empty()){
            int node= q.front();
            q.pop();
            count++;
            topo.push_back(node);
            for(auto it: adj[node]){
                indegree[it]--;
                if(indegree[it]==0) q.push(it);
            }
        }
        return count == numCourses;
    }
};