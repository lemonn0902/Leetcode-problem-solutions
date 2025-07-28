// Last updated: 7/29/2025, 12:51:00 AM
class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& firstList, vector<vector<int>>& secondList) {
        vector<vector<int>> res;
        int i=0;
        int j=0;
        int n=firstList.size();
        int m=secondList.size();
        while(i<n && j<m){
            if(firstList[i][1]>=secondList[j][0] && secondList[j][1] >= firstList[i][0]){
                //intersection exists
                int start= max(firstList[i][0], secondList[j][0]);
                int end= min(firstList[i][1], secondList[j][1]);
                res.push_back({start,end});
            }
            
            if(firstList[i][1] < secondList[j][1]) i++;
            else j++;
            
        }
        return res;
    }
};