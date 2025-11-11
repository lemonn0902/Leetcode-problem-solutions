// Last updated: 11/11/2025, 10:37:34 PM
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]!=i)
            return i;
        }
        return n;
    }
};