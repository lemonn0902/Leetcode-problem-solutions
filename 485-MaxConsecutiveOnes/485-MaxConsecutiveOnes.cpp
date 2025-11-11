// Last updated: 11/11/2025, 10:26:07 PM
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int res=0;
        int maxi=INT_MIN;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                maxi=max(res, maxi);
                res=0;
            }
            else{
                res++;
            }
        }
        maxi=max(res, maxi);
        return maxi;
    }
};