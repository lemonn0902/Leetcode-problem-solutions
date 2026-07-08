// Last updated: 7/8/2026, 10:11:27 PM
1class Solution {
2public:
3    int pivotIndex(vector<int>& nums) {
4        int tot=0;
5        int n=nums.size();
6        vector<int> prefix(n+1,0);
7        for(int i=0;i<n;i++){
8            prefix[i+1]=prefix[i]+nums[i];
9            tot+=nums[i];
10        }
11        for(int i=0;i<n;i++){
12            int rem=tot-prefix[i]-nums[i];
13            if(rem==prefix[i]) return i;
14        }
15        return -1;
16    }
17};