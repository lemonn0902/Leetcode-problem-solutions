// Last updated: 7/12/2025, 4:21:10 PM
class Solution {
public:
    bool canJump(vector<int>& nums) {
        int maxIndexReached=0;
        for(int i=0;i<nums.size();i++){
            if(i > maxIndexReached) return false;
            if(nums[i]+i>maxIndexReached)
            maxIndexReached=nums[i]+i;
            if(maxIndexReached>=nums.size()-1)
            return true;
        }
        return false;
    }
};