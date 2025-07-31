// Last updated: 7/31/2025, 9:15:33 PM
class Solution {
public:
    int minAreaRect(vector<vector<int>>& points) {
        unordered_set<string> st;
        for(int i=0;i<points.size();i++){
            st.insert(to_string(points[i][0])+"_"+to_string(points[i][1]));
        }
        int minArea=INT_MAX;
        for(int i=0;i<points.size();i++){
            int x1= points[i][0];
            int y1= points[i][1];
            for(int j=i+1;j<points.size();j++) {
                int x2= points[j][0];
                int y2= points[j][1];
                if (x1 != x2 && y1 != y2){
                if(st.count(to_string(x1)+"_"+to_string(y2))&&st.count(to_string(x2)+"_"+to_string(y1))) {
                    int len= abs(x1-x2);
                    int width= abs(y1-y2);
                    minArea=min(minArea, len*width);
                }
                }
            }
        }
        return minArea==INT_MAX?0:minArea;
    }
};