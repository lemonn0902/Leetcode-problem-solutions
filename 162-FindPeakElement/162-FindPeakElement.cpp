// Last updated: 10/27/2025, 7:53:19 PM
class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int s=0;
        int e=nums.size()-1;
        while(s<e){
            int m=s+(e-s)/2;
            if(nums[m]>nums[m+1]){
                //highest has to lie on left side including m
                e=m;
            }
            else{
                s=m+1;
            }
        }
        return s;
    }
};