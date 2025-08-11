// Last updated: 8/11/2025, 2:15:37 PM
class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n=nums.size();
        int l=0;
        int r=n-1;
        int maxSum=INT_MIN;
        while(l<r){
            int sum= nums[l]+nums[r];
            maxSum=max(sum, maxSum);
            l++;
            r--;
        }
        return maxSum;
    }
};