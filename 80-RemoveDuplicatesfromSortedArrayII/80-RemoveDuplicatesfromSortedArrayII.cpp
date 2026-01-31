// Last updated: 1/31/2026, 12:02:57 PM
1class Solution {
2public:
3    int removeDuplicates(vector<int>& nums) {
4        int n= nums.size();
5        if(n<=2) return n;
6        int k=2;
7        for(int i=2;i<n;i++){
8            if(nums[i]!=nums[k-2]){
9                nums[k]=nums[i];
10                k++;
11            }
12        }
13        return k;
14    }
15};