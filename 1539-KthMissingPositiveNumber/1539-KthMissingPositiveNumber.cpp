// Last updated: 11/26/2025, 7:33:38 PM
1class Solution {
2public:
3    int findKthPositive(vector<int>& arr, int k) {
4        int low=0;
5        int high=arr.size()-1;
6        while(low<=high){
7            int mid= low+(high-low)/2;
8            int missing=arr[mid]-(mid+1);
9            if(missing<k) low=mid+1;
10            else high=mid-1;
11        }
12        return low+k;
13    }
14};