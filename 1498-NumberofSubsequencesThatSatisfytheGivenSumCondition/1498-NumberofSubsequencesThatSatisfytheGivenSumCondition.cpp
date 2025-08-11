// Last updated: 8/11/2025, 1:09:13 PM
class Solution {
public:
    const int MOD = 1e9 + 7;
    int numSubseq(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int ans=0;
        int n=nums.size();
        int l=0;
        int r=n-1;
        vector<int> pow2(n,1);
        for(int i=1;i<n;i++){
            pow2[i]=(pow2[i-1]*2LL)%MOD;
        }
        while(l<=r){
            if(nums[l]+nums[r]<=target){
                ans=(ans+pow2[r-l])%MOD;
                l++;
            }
            else r--;
        }
        return ans;

    }
};