// Last updated: 7/31/2025, 12:05:07 AM
class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        int n=nums.size();
        int max=-999;
        for(int i=0;i<n;i++){
            if(nums[i]>max) max= nums[i];
        }
        int count=0;
        while(original<=max && count<=n){
            count++;
            if(find(nums.begin(), nums.end(), original)!=nums.end())
            original=original*2;
        }
        return original;
    }
};