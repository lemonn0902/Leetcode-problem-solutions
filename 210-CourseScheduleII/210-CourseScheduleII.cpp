// Last updated: 8/5/2026, 4:37:29 PM
1class Solution {
2public:
3    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
4        vector<vector<int>> adj(numCourses);
5        for(auto& e:prerequisites){
6            adj[e[1]].push_back(e[0]);
7        }
8        vector<int> indegree(numCourses,0);
9        for(int i=0;i<numCourses;i++){
10            for(int it:adj[i]){
11                indegree[it]++;
12            }
13        }
14        queue<int> q;
15        for(int i=0;i<indegree.size();i++){
16            if(indegree[i]==0) q.push(i);
17        }
18        vector<int> topo;
19        int c=0;
20        while(!q.empty()){
21            int node=q.front();
22            q.pop();
23            c++;
24            topo.push_back(node);
25            for(int next:adj[node]){
26                indegree[next]--;
27                if(indegree[next]==0) q.push(next);
28            }
29        }
30        if(c!=numCourses) return {};
31        return topo;
32    }
33};