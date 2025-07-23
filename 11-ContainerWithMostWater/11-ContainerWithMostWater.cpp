// Last updated: 7/23/2025, 10:26:27 PM
class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxArea=0;
        int n= height.size();
        int l=0;
        int r=n-1;
        for(int i=0;i<n;i++){
            int len=min(height[l],height[r]);
            int width=r-l;
            int area= len* width;
            maxArea=max(maxArea,area);
            if(height[l]<height[r]){
                l++;
            }
            else{
                r--;
            }
        }
        return maxArea;
    }
};