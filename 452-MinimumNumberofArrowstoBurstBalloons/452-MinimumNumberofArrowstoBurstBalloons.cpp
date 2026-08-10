// Last updated: 8/10/2026, 8:17:58 PM
1class Solution {
2public:
3    int findMinArrowShots(vector<vector<int>>& points) {
4        sort(points.begin(), points.end(), [](auto& a, auto& b){
5            return a[1]<b[1];
6        });
7        int last=points[0][1];
8        int count=1;
9        for(auto& p: points){
10            int start=p[0];
11            int end= p[1];
12            if(start>last){
13                count++;
14                last=end;
15            }
16            else continue;
17        }
18        return count;
19    }
20};