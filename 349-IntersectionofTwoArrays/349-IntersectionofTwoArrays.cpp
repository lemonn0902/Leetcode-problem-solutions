// Last updated: 1/29/2026, 10:39:33 PM
1class Solution {
2public:
3    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
4        vector<int> res;
5        sort(nums1.begin(), nums1.end());
6        sort(nums2.begin(), nums2.end());
7        int m=nums1.size();
8        int n=nums2.size();
9        int i=0;
10        int j=0;
11        while(i<m && j<n){
12            if(nums1[i]==nums2[j]){
13                if(res.empty()||res.back()!=nums1[i]){
14                    res.push_back(nums1[i]);
15                }
16                    i++;
17                    j++;
18                }
19                else if(nums1[i]>nums2[j]){
20                    j++;
21                }
22                else if(nums1[i]<nums2[j]){
23                    i++;
24                }
25            }
26        
27        return res;
28    }
29};