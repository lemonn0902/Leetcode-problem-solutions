// Last updated: 8/16/2026, 6:46:21 PM
1class Solution {
2public:
3    int findMinArrowShots(vector<vector<int>>& points) {
4        sort(points.begin(), points.end(), [](auto& a, auto& b){
5            return a[1]<b[1];
6        });
7        int arrows=0;
8        long long lastArrow=LLONG_MIN;
9        for(int i=0;i<points.size();i++){
10            int start=points[i][0];
11            int end=points[i][1];
12            if(start>lastArrow) {
13                arrows++;
14                lastArrow=end;
15            }
16        }
17        return arrows;
18    }
19};