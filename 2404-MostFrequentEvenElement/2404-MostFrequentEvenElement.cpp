// Last updated: 9/2/2025, 11:05:04 PM
class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        unordered_map<int,int> freq;
        for(int num:nums){
            if(num%2==0){
                freq[num]++;
            }
        }
        int f=0;
        int ans=-1; 
        for(auto it:freq){
            if(it.second>f||(it.second==f&&it.first<ans)){
                f=it.second;
                
                ans=it.first;
            }
        }
        return ans;
    }
};