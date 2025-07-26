// Last updated: 7/26/2025, 6:07:16 PM
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        //fast and slow pointers method - most optimal method
        int slow=nums[0];
        int fast=nums[0];
        while(true){
            slow=nums[slow];
            fast=nums[nums[fast]];
            if(slow==fast) break;
        }
        int slow2=nums[0];
        while(slow!=slow2){
            slow=nums[slow];
            slow2=nums[slow2];
        }
        return slow;
    }
};