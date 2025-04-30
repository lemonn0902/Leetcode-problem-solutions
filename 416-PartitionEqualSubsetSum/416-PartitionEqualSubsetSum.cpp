// Last updated: 5/1/2025, 12:35:30 AM
class Solution {
public:
    
    bool canPartition(vector<int>& nums) {
        int target=0, total=0;
        int n= nums.size();
        
        
        for(int i=0;i<nums.size();i++)
        total+=nums[i];
        target=total/2;
        vector<vector<bool>> dp(n, vector<bool>(target+1, 0));
        if(total%2!=0) return false;
        
        else {
            //base case:
            for(int i=0;i<n;i++){
                dp[i][0]= true;
            }
            if (nums[0] <= target) dp[0][nums[0]] = true;

            for( int i=1;i<n;i++){
                for(int t=1;t<=target;t++){
                    bool notTake= dp[i-1][t];
                    bool take= false;
                    if(t>=nums[i]) take=dp[i-1][t-nums[i]];
                    dp[i][t]= take | notTake;
                }
            }
        }
        return dp[n-1][target];
        
    }
};