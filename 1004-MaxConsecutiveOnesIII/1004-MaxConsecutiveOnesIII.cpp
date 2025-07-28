// Last updated: 7/28/2025, 12:51:23 PM
class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int l=0;
        int r=0;
        int n=nums.size();
        int maxAns=0;
        int zeroCount=0;
        while(r<n){
            if(nums[r]==0) zeroCount++;
            if(zeroCount>k){
                if(nums[l]==0) zeroCount--;
                l++;
            }
            maxAns=max(maxAns, 1+r-l);
            r++;
        }
        return maxAns;
    }
};