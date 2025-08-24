// Last updated: 8/24/2025, 10:56:50 AM
class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int maxAns=0;
        int l=0;
        int r=0;
        int n=nums.size();
        int no_of_zeroes=0;
        
        while(r<n){
            if(nums[r]==0){
                no_of_zeroes++;
            }
            while(no_of_zeroes>1){
                if(nums[l]==0) no_of_zeroes--;
                l++;
            }
            maxAns=max(maxAns,1+r-l);
            r++;
        }
        return --maxAns;
    }
};