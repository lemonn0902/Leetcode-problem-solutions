// Last updated: 1/27/2026, 3:45:06 PM
1class Solution {
2public:
3    void sortColors(vector<int>& nums) {
4        int high=nums.size()-1;
5        int low=0;
6        int mid=0;
7        while(mid<=high){
8            
9            if(nums[mid]==1){
10                mid++;
11            }
12            else if(nums[mid]==0){
13                swap(nums[mid], nums[low]);
14                low++;
15                mid++;
16            }
17            else if(nums[mid]==2){
18                swap(nums[mid], nums[high]);
19                high--;
20                
21            }
22        }
23    }
24};