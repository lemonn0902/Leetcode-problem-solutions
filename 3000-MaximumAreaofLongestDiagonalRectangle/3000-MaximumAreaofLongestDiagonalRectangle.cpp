// Last updated: 8/26/2025, 12:47:47 PM
class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        double longest=0;
        int maxArea=1;
        for(int i=0;i<dimensions.size();i++){
            int l=dimensions[i][0];
            int b=dimensions[i][1];
            double diag=sqrt(l*l+b*b);
            int area=l*b;
            if(diag>longest||(diag==longest&&area>maxArea)){
                longest=diag;

                maxArea=area;
            }
        }
        return maxArea;
    }
};