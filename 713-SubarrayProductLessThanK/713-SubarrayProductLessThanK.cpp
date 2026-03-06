// Last updated: 3/6/2026, 7:20:33 PM
1class Solution {
2public:
3    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
4        if(k<=1) return 0;
5        int l=0;
6        int r=0;
7        int n= nums.size();
8        int res=0;
9        int prod=1;
10        while(r<n){
11            
12            prod=prod*nums[r];
13            while(prod>=k){
14                prod=prod/nums[l];
15                l++;
16            } 
17            res+=1+r-l;
18            r++;
19        }
20        return res;
21    }
22};