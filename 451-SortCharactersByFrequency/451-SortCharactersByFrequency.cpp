// Last updated: 8/30/2025, 4:13:32 PM
class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> freq;
        for(char ch:s){
            freq[ch]++;
        }
        vector<pair<char,int>> freqVec(freq.begin(), freq.end());
        sort(freqVec.begin(), freqVec.end(), [](const pair<char,int>& a,const pair<char, int>& b){
            return a.second>b.second;
        });
        string res;
        for(auto it:freqVec){
            res.append(it.second,it.first);
        }
        return res;

    }
};