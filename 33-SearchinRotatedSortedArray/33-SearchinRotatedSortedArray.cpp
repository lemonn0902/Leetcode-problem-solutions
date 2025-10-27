// Last updated: 10/27/2025, 5:16:49 PM
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low= 0;
        int high=nums.size()-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[mid]==target) return mid;
            if(nums[mid]>=nums[low]){
                //left part is sorted
                if(target>=nums[low]&&target<=nums[mid]){
                    high=mid-1;
                }
                else low=mid+1;
            }
            else{
                //right part is sorted 
                if(target>=nums[mid]&&target<=nums[high]){
                    low=mid+1;
                }
                else high=mid-1; 
            }
        }
        return -1;
    }
};