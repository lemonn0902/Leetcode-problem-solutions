// Last updated: 5/17/2026, 1:04:21 PM
1class Solution {
2public:
3    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
4        int n=points.size();
5        priority_queue<pair<int,vector<int>>, vector<pair<int,vector<int>>>, greater<pair<int, vector<int>>>> pq;
6        vector<vector<int>> ans;
7        for(int i=0;i<n;i++){
8            int x=points[i][0];
9            int y=points[i][1];
10            int d= x*x + y*y;
11            pq.push({d,points[i]});
12        }
13        while(k){
14            ans.push_back(pq.top().second);
15            pq.pop();
16            k--;
17        }
18        return ans;
19    }
20};