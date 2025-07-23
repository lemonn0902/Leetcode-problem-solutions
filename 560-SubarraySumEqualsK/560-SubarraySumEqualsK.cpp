// Last updated: 7/24/2025, 12:34:50 AM
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> mpp;
        mpp[0]=1;
        int preSum=0;
        int count=0;
        for(int i=0;i<nums.size();i++){
            preSum+=nums[i];
            if(mpp.find(preSum-k)!=mpp.end()){
                count+= mpp[preSum-k];
            }
            mpp[preSum]++;
            
        }
        return count;
    }
};