// Last updated: 7/29/2025, 1:57:18 PM
class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n=nums.size();
        //if(find(nums.begin(), nums.end(), 1)==nums.end()) return 1;
        
        for(int i=0;i<nums.size();i++){
            while(nums[i]>0&&nums[i]<=n&&nums[i]!= nums[nums[i]-1]){
                
                int temp=nums[i];
                nums[i]=nums[temp-1];
                nums[temp-1]=temp;
            }
        }
        
        for(int i=0;i<n;i++){
            if(nums[i]!=i+1) return i+1;
        }
        return n+1;
    }
};