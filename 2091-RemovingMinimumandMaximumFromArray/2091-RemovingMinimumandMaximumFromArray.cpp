// Last updated: 8/28/2025, 7:26:33 PM
class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int minel=INT_MAX; int minidx=0;
        int maxel=INT_MIN; int maxidx=0;
        int n=nums.size();
        for(int i=0;i<nums.size();i++){
            if(nums[i]<minel){
                minel=nums[i];
                minidx=i;
            }
            if(nums[i]>maxel){
                maxel=nums[i];
                maxidx=i;
            }
        }
        if (minidx > maxidx) swap(minidx, maxidx);
        int front = max(minidx, maxidx) + 1;
        int back = n-min(minidx, maxidx);
        int both = (minidx + 1) + (n - maxidx);

        return min({front, back, both});
        
    }
};