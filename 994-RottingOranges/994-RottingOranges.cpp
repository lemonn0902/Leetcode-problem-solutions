// Last updated: 8/5/2026, 2:36:03 PM
1class Solution {
2public:
3    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
4        vector<vector<int>> adj(numCourses);
5        for(auto e:prerequisites){
6            adj[e[1]].push_back(e[0]);
7        }
8        vector<int> indegree(numCourses,0);
9        for(int i=0;i<numCourses;i++){
10            for(auto it:adj[i]) indegree[it]++;
11        }
12        queue<int> q;
13        for(int i=0;i<indegree.size();i++){
14            if(indegree[i]==0) q.push(i);
15        }
16        int len=0;
17        while(!q.empty()){
18            int node=q.front();
19            q.pop();
20            len++;
21            for(int next:adj[node]){
22                indegree[next]--;
23                if(indegree[next]==0) q.push(next);
24            }
25        }
26        if(len==numCourses) return true;
27        else return false;
28    }
29};