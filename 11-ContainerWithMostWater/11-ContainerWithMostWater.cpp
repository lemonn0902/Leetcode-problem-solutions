// Last updated: 1/29/2026, 9:58:28 PM
1class Solution {
2public:
3    int maxArea(vector<int>& height) {
4        int ans=0;
5        int r=height.size()-1;
6        int l=0;
7        for(int i=0;i<height.size();i++){
8            int length= min(height[l], height[r]);
9            int width= (r-l);
10            int area= length* width;
11            ans=max(ans, area);
12            if(height[l]<height[r]){
13                l++;
14            }
15            else r--;
16        }
17        return ans;
18    }
19};