// Last updated: 8/5/2026, 4:36:10 PM
1class Solution {
2public:
3    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
4        vector<vector<int>> adj(numCourses);
5        int m= prerequisites.size();
6        for(int i=0;i<m;i++){
7            adj[prerequisites[i][1]].push_back(prerequisites[i][0]);
8        }
9        queue<int> q;
10        vector<int> topo;
11        vector<int> indeg(numCourses, 0);
12        for(int i=0;i<numCourses;i++){
13            for(auto it: adj[i]) indeg[it]++;
14        }
15        for(int i=0;i<numCourses;i++){
16            if(indeg[i]==0) q.push(i);
17        }
18        int count=0;
19        while(!q.empty()){
20            int node= q.front();
21            q.pop();
22            count++;
23            topo.push_back(node);
24            for(auto it: adj[node]){
25                indeg[it]--;
26                if(indeg[it]==0) q.push(it);
27            }
28        }
29        if(count!=numCourses) return {};
30        return topo;
31    }
32};