// Last updated: 7/31/2025, 8:49:47 PM
class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        int SumRight=0;
        int SumLeft=0;
        for(int i=0;i<n;i++){
            sum=sum+nums[i];
        }
        for(int i=0;i<n;i++){
            SumRight=sum-nums[i]-SumLeft;
            if(SumLeft==SumRight) return i;
            SumLeft+=nums[i];
        }
        return -1;
    }
};