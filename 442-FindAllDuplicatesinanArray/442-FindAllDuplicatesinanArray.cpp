// Last updated: 7/29/2025, 1:07:15 PM
class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n;i++){
            while(nums[i]!=nums[nums[i]-1]){
                int temp=nums[i];
                nums[i]=nums[temp-1];
                nums[temp-1]=temp;
            }
        }
        vector<int> res;
        for(int i=0;i<n;i++){
            if(nums[i]!=i+1) res.push_back(nums[i]);
        }
        return res;
    }
};