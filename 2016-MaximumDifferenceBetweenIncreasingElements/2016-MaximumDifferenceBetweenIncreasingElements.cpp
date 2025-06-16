// Last updated: 6/16/2025, 2:04:31 PM
class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int maxDiff=INT_MIN;
        int min=nums[0];
        for(int i=0;i<nums.size();i++){
            if(nums[i]<min)
            min=nums[i];
            int diff= nums[i]-min;
            maxDiff= max(diff, maxDiff);
        }
        if(maxDiff==0) return -1;
        return maxDiff;
    }
};