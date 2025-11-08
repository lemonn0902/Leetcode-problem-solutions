// Last updated: 11/8/2025, 10:13:25 PM
class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        int ans=0;
        sort(intervals.begin(), intervals.end(), [](auto &a, auto &b){
            return a[1]<b[1];
        });
        int n=intervals.size();
        int prevEnd = intervals[0][1];
        for(int i=1;i<n;i++){
            int start = intervals[i][0];
            if(prevEnd>start){
                ans++;
            }
            else prevEnd=intervals[i][1];
        }
        return ans;
    }
};