// Last updated: 10/12/2025, 3:09:28 PM
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        vector<vector<string>> res;
        unordered_map<string, vector<string>> mpp;
        for(int i=0;i<strs.size();i++){
            string curr= strs[i];
            sort(curr.begin(), curr.end());
            mpp[curr].push_back(strs[i]);
        }
        for(auto it: mpp){
            res.push_back(it.second);
        }
        return res;
    }
};