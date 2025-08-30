// Last updated: 8/30/2025, 5:04:06 PM
class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        unordered_map<int,int> freq;
        int numRemoved=0;
        int n=nums.size();
        // if(n<=1) return {0,1};
        // if(n==2){
        //     if(nums[0]!=nums[1]) return {0,2};
        //     else return {1,0};
        // }
        for(int n:nums){
            freq[n]++;
        }
        for(auto& it:freq){
            if(it.second<=1) continue;
            else{
                int temp=it.second;
                it.second=temp%2;
                numRemoved=numRemoved+(temp/2);
            }
        }
        int numLeft=0;
        for(auto it:freq){
            if(it.second>=1){
                numLeft++;
            }
        }
        return {numRemoved, numLeft};

    }
};