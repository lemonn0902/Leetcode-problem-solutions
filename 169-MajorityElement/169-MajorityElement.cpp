// Last updated: 9/2/2025, 10:31:28 PM
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        int req=n/2;
        unordered_map<int,int> freq;
        for(int num:nums){
            freq[num]++;
        }
        for(auto it:freq){
            if(it.second>req) return it.first;
        }
        return 0;
    }
};