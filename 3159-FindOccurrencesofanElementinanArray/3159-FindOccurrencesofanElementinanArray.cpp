// Last updated: 8/23/2025, 1:33:07 PM
class Solution {
public:
    vector<int> occurrencesOfElement(vector<int>& nums, vector<int>& queries, int x) {
        unordered_map<int,int> mpp; //freq,index
        int count=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==x){
                count++;
                mpp[count]=i;
            }
        }
        vector<int> res;
        for(int i=0;i<queries.size();i++){
            int freqNeeded=queries[i];
            if(freqNeeded>count){
                res.push_back(-1);
            }
            else{
                res.push_back(mpp[freqNeeded]);
            }
        }
        return res;
    }
};