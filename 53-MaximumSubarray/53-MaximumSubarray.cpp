// Last updated: 11/8/2025, 10:36:28 PM
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int ans=0;
        int maxi=nums[0];
        for(int i=0;i<nums.size();i++){
            ans+=nums[i];
            maxi=max(maxi, ans);
            if(ans<0){
                ans=0;
            }
        }
        return maxi;
    }
};