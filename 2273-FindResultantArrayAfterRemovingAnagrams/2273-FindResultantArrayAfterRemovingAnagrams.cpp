// Last updated: 10/13/2025, 11:29:57 PM
class Solution {
public:
    vector<string> removeAnagrams(vector<string>& words) {
        vector<unordered_map<char,int>> freq(words.size());
        for(int i=0;i<words.size();i++){
            for(char ch:words[i]) freq[i][ch]++;
        }
        vector<string> res;
        res.push_back(words[0]);
        for(int i=1;i<words.size();i++){
            if(freq[i]!=freq[i-1]) res.push_back(words[i]);
        }
        return res;
    }
};