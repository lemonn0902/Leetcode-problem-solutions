// Last updated: 1/28/2026, 6:59:02 PM
1class Solution {
2public:
3    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
4        int i=m-1;
5        int j=n-1;
6        int k=m+n-1;
7        while(i>=0 && j>=0){
8            if(nums1[i]>nums2[j]){
9                nums1[k]=nums1[i];
10                i--;
11            }
12            else{
13                nums1[k]=nums2[j];
14                j--;
15            }
16            k--;
17        }
18        while(j>=0){
19            nums1[k]=nums2[j];
20            j--;
21            k--;
22        }
23    }
24};