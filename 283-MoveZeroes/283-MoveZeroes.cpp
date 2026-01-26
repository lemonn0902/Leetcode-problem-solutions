// Last updated: 1/26/2026, 11:26:13 PM
1class Solution {
2public:
3    void moveZeroes(vector<int>& nums) {
4        int lastNonZeroFoundAt=0;
5        for(int i =0;i<nums.size();i++){
6            if(nums[i]!=0){
7                nums[lastNonZeroFoundAt]=nums[i];
8                lastNonZeroFoundAt++;
9            }
10
11        }
12        for(int i=lastNonZeroFoundAt;i<nums.size();i++){
13            nums[i]=0;
14        }
15    }
16};