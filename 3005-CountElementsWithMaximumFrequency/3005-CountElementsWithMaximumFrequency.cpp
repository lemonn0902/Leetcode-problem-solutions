// Last updated: 9/22/2025, 3:47:26 PM
class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        int ans=0;
        int maxf=1;
        unordered_map<int,int> freq;
        for(int n:nums){
            freq[n]++;
        }
        for(auto it:freq){
            if(it.second>maxf) maxf=it.second;
        }
        for(auto it:freq){
            if(it.second==maxf){
                ans=ans+(it.second);
            }
        }
        return ans;
    }
};