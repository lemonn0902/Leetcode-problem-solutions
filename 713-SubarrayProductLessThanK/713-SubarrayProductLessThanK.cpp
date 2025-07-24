// Last updated: 7/24/2025, 12:17:54 PM
class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if(k<=1) return 0;
        int l=0;
        int r=0;
        int n= nums.size();
        int res=0;
        int prod=1;
        while(r<n){
            
            prod=prod*nums[r];
            while(prod>=k){
                prod=prod/nums[l];
                l++;
            } 
            res+=1+r-l;
            r++;
        }
        return res;
    }
};