// Last updated: 8/11/2025, 12:04:13 AM
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n=nums.size();
        int res=0;
        for(int i=0;i<n;i++){
            res=res^nums[i];
        }
        return res;
    }
};