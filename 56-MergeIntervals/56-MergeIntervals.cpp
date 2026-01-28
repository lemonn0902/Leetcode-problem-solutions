// Last updated: 1/28/2026, 6:40:41 PM
1class Solution {
2public:
3    vector<vector<int>> merge(vector<vector<int>>& intervals) {
4        vector<vector<int>> res;
5        sort(intervals.begin(), intervals.end());
6        for(int i=0;i<intervals.size();i++){
7            int start = intervals[i][0];
8            int end = intervals[i][1];
9            if(res.empty() || res.back()[1]<start){
10                res.push_back(intervals[i]);
11            }
12            else{
13                res.back()[1]=max(res.back()[1], end);
14            }
15            
16        }
17        return res;
18    }
19};