// Last updated: 7/24/2025, 11:18:09 AM
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        if(n==0) return 0;
        int i=0; //next unique index
        for(int j=1;j<n;j++){
            if(nums[i]!=nums[j]){
                i++;
                nums[i]=nums[j];
                
            }
            

        }
        return i+1;
    }
};