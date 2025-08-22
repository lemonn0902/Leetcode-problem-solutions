// Last updated: 8/22/2025, 12:26:07 PM
class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int maxAns=1;
        int n=nums.size();
        int curr=1;
        for(int i=0;i<n-1;i++){
            if(nums[i+1]>nums[i]) {
                curr++;
                maxAns=max(maxAns, curr);
            }
            else curr=1;
        }
        return maxAns;
    }
};