// Last updated: 9/26/2025, 1:22:10 PM
class Solution {
public:
    long long largestPerimeter(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        long long ans=-1;
        long long curr=0;
        int n=nums.size();
        for(int i=0;i<n-1;i++){
            curr+=nums[i];
            if(curr>nums[i+1]){
                ans=nums[i+1]+curr;
            }
            
        }
        return ans;

    }
};