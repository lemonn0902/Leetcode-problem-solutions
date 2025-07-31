// Last updated: 7/31/2025, 11:35:58 AM
class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n=nums.size();
        int l=0;
        int r=0;
        int minAns=INT_MAX;
        int sum=0;
        while(r<n){
            sum=sum+nums[r];
            while(sum>=target ){
                minAns=min(1+r-l,minAns);
                sum=sum-nums[l];
                l++;
            }
            r++;
        }
        return minAns==INT_MAX?0:minAns;
    }
};