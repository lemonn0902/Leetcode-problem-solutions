// Last updated: 8/1/2025, 3:36:20 PM
class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        unordered_map<int,int> freq;
        for(int num:nums){
            freq[num]++;
        }
        int ways=0;
        for(auto& [num,cnt]:freq){
            if(k==0){
                if(cnt>1) ways++;
            }
            else{
                if(freq.count(num+k)) ways++;
            }
        }
        return ways;
    }
};