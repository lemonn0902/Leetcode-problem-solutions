// Last updated: 7/26/2025, 2:26:26 PM
class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int closestSum=nums[0]+nums[1]+nums[2];
        int n=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            int j=i+1;
            int k=n-1;
            while(j<k){
                int sum=nums[i]+nums[j]+nums[k];
                if(abs(sum-target)<abs(closestSum-target)){
                    closestSum=sum;
                }
                if(sum<target){
                    j++;
                }
                else if(sum>target){
                    k--;
                }
                else{
                    return target;
                }
                
                

            }
        }
        return closestSum;
    }
};