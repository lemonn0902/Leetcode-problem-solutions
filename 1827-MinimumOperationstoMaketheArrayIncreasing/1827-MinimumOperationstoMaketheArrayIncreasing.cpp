// Last updated: 8/14/2025, 12:27:12 PM
class Solution {
public:
    int minOperations(vector<int>& nums) {
        if(nums.size()==1) return 0;
        int n=nums.size();
        int ans=0;
        for(int i=0;i<n;i++){
            if(i+1<n&&nums[i]<nums[i+1]) continue;
            else{
                if(i+1>=n) break;
                int t=nums[i]+1;
                ans=ans+(t-nums[i+1]);
                nums[i+1]=t;
            }
        }
        return ans;
    }
};