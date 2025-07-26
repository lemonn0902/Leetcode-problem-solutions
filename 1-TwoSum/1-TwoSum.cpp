// Last updated: 7/26/2025, 12:38:53 PM
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mpp;
        for(int i=0;i<nums.size();i++){
            mpp[nums[i]]=i;
        }
        for(int i=0;i<nums.size();i++){
            int d= target-nums[i];
            if(mpp.count(d)&& mpp[d]!=i){
                return {i,mpp[d]};
            }
        }
        return {};
    }
};