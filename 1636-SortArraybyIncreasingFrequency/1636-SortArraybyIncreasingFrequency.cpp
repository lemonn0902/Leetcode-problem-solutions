// Last updated: 8/30/2025, 4:42:49 PM
class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int,int> freq;
        for(int n:nums){
            freq[n]++;
        }
        vector<pair<int,int>> freqVec(freq.begin(), freq.end());
        sort(freqVec.begin(), freqVec.end(), [](const pair<int,int>& a, const pair<int,int>& b){
            if(a.second!=b.second)
            return a.second<b.second;
            else
            return a.first>b.first;
        });
        vector<int> res;
        for(auto it:freqVec){
            for(int i=0;i<it.second;i++){
                res.push_back(it.first);
            }
        }
        return res;

    }
};