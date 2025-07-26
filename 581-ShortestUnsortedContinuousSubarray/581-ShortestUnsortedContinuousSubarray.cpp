// Last updated: 7/27/2025, 1:26:50 AM
class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int n=nums.size();
        if(n==0||n==1) return 0;
        if(n==2 && nums[0]>nums[1]) return 2;
        int end=-2;
        int start=-1;
        int leftMin = nums[n-1];    
        int rightMax = nums[0]; 
        for(int i = 1; i < n; i++) {
            rightMax = max(rightMax, nums[i]);
            if(nums[i] < rightMax) {
                end = i;
            }
        }
        for(int i = n - 2; i >= 0; i--) {
            leftMin = min(leftMin, nums[i]);
            if(nums[i] > leftMin) {
                start = i;
            }
        }
        return end - start + 1;
    }
};