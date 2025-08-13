// Last updated: 8/13/2025, 7:06:20 PM
class Solution {
public:
    int longestStrChain(vector<string>& words) {
        sort(words.begin(), words.end(), [](const string &a, const string &b) {
        return a.size() < b.size(); 
    });
        unordered_map<string,int> chains;
        for(auto& word: words){
            chains[word]=1;
            for(int i=0;i<word.size();i++){
                string pred=word.substr(0,i)+word.substr(i+1);
                if(chains.find(pred)!=chains.end()){
                    chains[word]=max(chains[word], chains[pred]+1);
                }
            }
        }
        int maxLen=0;
        for(auto& w: chains){
            maxLen=max(maxLen,w.second);
        }
        return maxLen;
    }
};