class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int pos=0;
        int neg=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0)
            continue;
            if(nums[i]<0)
            neg++;
            else
            pos++;
        }
        return max(neg, pos);
    }
};