// Last updated: 9/1/2025, 12:59:51 AM
class Solution {
public:
    bool wordPattern(string pattern, string s) {
        vector<string> words;
        string word;
        stringstream ss(s);
        while(ss>>word){
            words.push_back(word);
        }
        if(words.size()!=pattern.size()) return false;
        unordered_map<char,int> p;
        unordered_map<string,int> w;
        for(int i=0;i<pattern.size();i++){
            if(p.find(pattern[i])==p.end()){
                p[pattern[i]]=i;
            }
            if(w.find(words[i])==w.end()){
                w[words[i]]=i;
            }
            if(p[pattern[i]]!=w[words[i]]) return false;
        }
        return true;
    }
};