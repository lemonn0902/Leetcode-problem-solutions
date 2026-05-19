// Last updated: 5/20/2026, 12:17:46 AM
1class Solution {
2public:
3    int furthestBuilding(vector<int>& heights, int bricks, int ladders) {
4        priority_queue<int, vector<int>, greater<int>> pq;
5        for(int i=0;i<heights.size()-1;i++){
6            int d=heights[i+1]-heights[i];
7            if(d<=0) continue;
8            pq.push(d);
9            if(pq.size()>ladders){
10                bricks-=pq.top();
11                pq.pop();
12            }
13            if(bricks<0) return i;
14        }
15        return heights.size()-1;
16    }
17};