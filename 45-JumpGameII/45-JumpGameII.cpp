// Last updated: 7/12/2025, 5:16:19 PM
class Solution {
public:
    int jump(vector<int>& nums) {
        int l=0, r=0;
        int jumps=0;
        while(r<nums.size()-1){
            int farthest=0;
            for(int i=l;i<=r;i++){
                 farthest=max(farthest, nums[i]+i);
            }
                l=r+1;
                r=farthest;
                jumps++;
            
        }
        return jumps;
    }
};