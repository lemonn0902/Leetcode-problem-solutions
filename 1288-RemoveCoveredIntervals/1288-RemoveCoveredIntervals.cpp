// Last updated: 7/6/2026, 4:55:05 PM
1class Solution {
2public:
3    int removeCoveredIntervals(vector<vector<int>>& intervals) {
4        int n=intervals.size();
5        sort(intervals.begin(), intervals.end(),
6        [](vector<int>& a, vector<int>& b){
7
8            if(a[0] == b[0])
9                return a[1] > b[1];
10
11            return a[0] < b[0];
12        });
13        vector<vector<int>> res;
14        for(int i=0;i<n;i++){
15            int s=intervals[i][0];
16            int e=intervals[i][1];
17            if(i>0&& s>=res.back()[0]&&e<=res.back()[1]){
18                continue;
19            }
20            else{
21                res.push_back(intervals[i]);
22            }
23        }
24        return res.size();
25    }
26};