// Last updated: 11/22/2025, 2:48:45 PM
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxi=INT_MIN;
        int curr=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                maxi=max(maxi,curr);
                curr=0;
            }
            else{
                curr++;
            }
        }
        maxi=max(maxi,curr);
        return maxi;
    }
};