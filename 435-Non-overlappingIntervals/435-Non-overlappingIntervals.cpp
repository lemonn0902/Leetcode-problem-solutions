// Last updated: 8/13/2025, 12:13:14 PM
class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());
        int n=intervals.size();
        vector<vector<int>> ans;
        int c=0;
        for(int i=0;i<n;i++){
            int start= intervals[i][0];
            int end= intervals[i][1];
            if(ans.empty()||start>=ans.back()[1]){
                ans.push_back(intervals[i]);
            }
            else{
                int e=min(end, ans.back()[1]);
                ans.push_back({start,e});
                c++;
            }

        }
        return c;
    }
};