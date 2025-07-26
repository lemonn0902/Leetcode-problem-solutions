// Last updated: 7/26/2025, 1:39:34 PM
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
        sort(nums.begin(),nums.end());
        int n=nums.size();
        for(int i=0;i<nums.size();i++){
            if(i>0&& nums[i]==nums[i-1]) continue;
            int j=i+1;
            int k=n-1;
            while(j<k){
                int sum= nums[i]+nums[j]+nums[k];
            if(sum>0){
                k--;
            }
            else if(sum<0){
                j++;
            }
            else{
                res.push_back({nums[i],nums[j],nums[k]});
                j++;
                k--;
                while (j < k && nums[j] == nums[j - 1]) j++;
                while (j < k && nums[k] == nums[k + 1]) k--;
            }
            }
            
        }
        return res;
    }
};