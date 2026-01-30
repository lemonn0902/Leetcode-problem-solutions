// Last updated: 1/30/2026, 1:15:00 PM
1class Solution {
2public:
3    int findDuplicate(vector<int>& nums) {
4        int slow=nums[0];
5        int fast=nums[0];
6        do{
7            slow=nums[slow];
8            fast=nums[nums[fast]];
9
10        }while(slow!=fast);
11        fast=nums[0];
12        while(slow!=fast){
13            slow=nums[slow];
14            fast=nums[fast];
15        }
16        return slow;
17    }
18};