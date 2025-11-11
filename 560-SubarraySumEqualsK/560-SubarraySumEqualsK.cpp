// Last updated: 11/11/2025, 9:57:01 PM
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int res=0;
        int sum=0;
        unordered_map<int,int> prefixSum;
        prefixSum[0]=1;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            if(prefixSum.find(sum-k)!=prefixSum.end()){
                res=res+prefixSum[sum-k];
            }
            prefixSum[sum]++;
        }
        return res;
    }
};