// Last updated: 8/19/2025, 4:39:11 PM
class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        int n=nums.size();
        long long count=0; int s=0;
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                s++;
                count+=s;
            }
            else s=0;
        }
        return count;
    }
};