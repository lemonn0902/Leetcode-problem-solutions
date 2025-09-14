// Last updated: 9/14/2025, 6:16:43 PM
class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());
        vector<vector<int>> res;
        int ans=0;
        int n= intervals.size();
        for(int i=0;i<n;i++){
            if(res.empty()||res.back()[1]<=intervals[i][0]){
                res.push_back(intervals[i]);
            }
            else{
                ans++;
                int e=min(res.back()[1], intervals[i][1]);
                res.push_back({intervals[i][0], e});

            }
        }
        return ans;
    }
};