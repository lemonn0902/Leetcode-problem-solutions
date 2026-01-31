// Last updated: 1/31/2026, 12:35:21 PM
1class Solution {
2public:
3    vector<int> sortArrayByParity(vector<int>& nums) {
4        int idx=0;
5        int n=nums.size();
6        for(int i=0;i<n;i++){
7            if(nums[i]%2==0){
8                //odd
9                swap(nums[idx], nums[i]);
10                idx++;
11            }
12        }
13        return nums;
14    }
15};