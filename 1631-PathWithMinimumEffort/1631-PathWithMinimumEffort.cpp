// Last updated: 8/6/2026, 4:29:22 PM
1class Solution {
2public:
3    int minimumEffortPath(vector<vector<int>>& heights) {
4        int r=heights.size();
5        int c=heights[0].size();
6        vector<vector<int>> dist(r,vector<int>(c,INT_MAX));
7        priority_queue< tuple<int,int,int> , vector<tuple<int,int,int>>, greater<>> pq;
8        pq.push({0,0,0});
9        dist[0][0]=0;
10        vector<int> dr = {-1, 1, 0, 0};
11        vector<int> dc = {0, 0, -1, 1};
12        while(!pq.empty()){
13            auto [diff,row,col]=pq.top();
14            pq.pop();
15            if(diff>dist[row][col]) continue; //stale
16            if(row==r-1&&col==c-1) return diff;
17            for(int k=0;k<4;k++){
18                int nr=row+dr[k];
19                int nc=col+dc[k];
20                if(nr<0||nc<0||nr>=r||nc>=c) continue;
21                
22                int w=abs(heights[row][col]-heights[nr][nc]);
23                int newEffort=max(w, diff);
24                if(newEffort<dist[nr][nc]){
25                    dist[nr][nc]=newEffort;
26                    pq.push({newEffort,nr,nc});
27                }
28            }
29        }
30        return 0;
31        
32    }
33};