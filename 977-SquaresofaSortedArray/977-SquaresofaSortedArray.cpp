// Last updated: 1/30/2026, 11:43:54 AM
1class Solution {
2public:
3    vector<int> sortedSquares(vector<int>& nums) {
4        vector<int> res;
5        int n=nums.size();
6        int l=0;
7        int r=n-1;
8        while(l<=r){
9            int ls= nums[l]* nums[l];
10            int rs= nums[r]* nums[r];
11            if(ls<=rs){
12                res.push_back(rs);
13                r--;
14            }
15            else if(ls>rs){
16                res.push_back(ls);
17                l++;
18            }
19        }
20        reverse(res.begin(), res.end());
21        return res;
22    }
23};