// Last updated: 7/8/2025, 2:01:31 AM
class Solution {
public:
    bool isPossibleDivide(vector<int>& nums, int k) {
        if(nums.size()%k!=0) return false;
        map<int,int> freq;
        for(auto it: nums){
            freq[it]++;
        }
        for(auto [num,count]: freq){
            if(count ==0 ) continue;
            for(int i=0;i<k;i++){
                if(freq[num+i]<count) return false;
                freq[num+i]-=count;
            }
        }
        return true;
    }
};