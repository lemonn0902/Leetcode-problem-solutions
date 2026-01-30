// Last updated: 1/30/2026, 1:04:16 PM
1class Solution {
2public:
3    int findDuplicate(vector<int>& nums) {
4        int n=nums.size();
5        int i=0;
6        while(i<n){
7            if(nums[i]!=nums[nums[i]-1]){
8                swap(nums[i], nums[nums[i]-1]);
9            }
10            else i++;
11        }
12        for(int i=0;i<n;i++){
13            if(nums[i]!=i+1) return nums[i];
14        }
15        return 0;
16    }
17};