// Last updated: 7/31/2025, 12:09:08 AM
class Solution {
public:
    bool checkIfPangram(string sentence) {
        unordered_map<char,int> freq;
        for (char c = 'a'; c <= 'z'; ++c) {
            freq[c] = -1;
        }
        for(int i=0;i<sentence.size();i++){
            freq[sentence[i]]++;
        }
        for(char ch='a';ch<='z';ch++){
            if(freq[ch]==-1) return false;
        }
        return true;
    }
};