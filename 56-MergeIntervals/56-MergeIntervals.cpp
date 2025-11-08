// Last updated: 11/8/2025, 8:43:20 PM
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> res;
        int n= intervals.size();
        sort(intervals.begin(), intervals.end());
        for(int i=0;i<n;i++){
            if(res.empty()|| intervals[i][0]>res.back()[1])
            res.push_back(intervals[i]);
            else
            res.back()[1]=max(res.back()[1], intervals[i][1]);
        }
        return res;
    }
};