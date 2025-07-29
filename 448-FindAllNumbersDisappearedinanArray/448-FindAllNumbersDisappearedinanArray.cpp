// Last updated: 7/29/2025, 12:48:44 PM
class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> res;
        unordered_map<int,int> mpp;
        
        for(int i=0;i<nums.size();i++){
            mpp[nums[i]]++;
        }
        for(int i=1;i<=nums.size();i++){
            if(mpp[i]==0) res.push_back(i);
        }
        return res;
    }
};