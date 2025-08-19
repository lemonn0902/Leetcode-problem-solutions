// Last updated: 8/19/2025, 5:20:53 PM
class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        int n=nums.size();
        if(n<3) return 0;
        int curr=0;
        int ans=0;
        for(int i=2;i<n;i++){
            if(nums[i]-nums[i-1]==nums[i-1]-nums[i-2]){
                curr++;
                ans=ans+curr;
            }
            else curr=0;
        }
        
        return ans;
    }
};