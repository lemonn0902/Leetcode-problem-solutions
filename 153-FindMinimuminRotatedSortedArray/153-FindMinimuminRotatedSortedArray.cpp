// Last updated: 10/27/2025, 7:34:07 PM
class Solution {
public:
    int findMin(vector<int>& nums) {
        int low=0;
        int high=nums.size()-1;
        int mini=INT_MAX;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[mid]>=nums[low]){
                mini=min(mini, nums[low]);
                low=mid+1;

            }
            else {
                mini=min(mini, nums[mid]);
                high=mid-1;
            }
        }
        return mini;
    }
};