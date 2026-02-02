// Last updated: 2/2/2026, 12:49:07 PM
1class Solution {
2public:
3    vector<int> resultsArray(vector<int>& nums, int k) {
4        int n=nums.size();
5        if(n==1) return {nums[0]};
6        vector<int> res(n-k+1, -1);
7        int l=0;
8        int r=0;
9        while(r<n){
10            if(r>0&& nums[r]-nums[r-1]!=1) l=r;
11            if(r-l+1>k){
12                l++;
13            }
14            if(r-l+1==k) res[l]=nums[r];
15            r++;
16            
17        }
18        return res;
19    }
20};