// Last updated: 9/13/2025, 5:38:03 PM
class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int> mpp;
        mpp[0]=-1;
        int ans=0;
        int prefixSum=0;
        for(int i=0;i<n;i++){
            if(nums[i]==1){
                prefixSum+=1;
            }
            else prefixSum-=1;
            if(mpp.count(prefixSum)){
                ans=max(ans,i-mpp[prefixSum]);
            }else{
                mpp[prefixSum]=i;
            }
        }
        return ans;
    }
};