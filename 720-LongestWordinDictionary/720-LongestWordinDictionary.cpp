// Last updated: 8/13/2025, 7:41:22 PM
class Solution {
public:
    string longestWord(vector<string>& words) {
        sort(words.begin(), words.end());
        string ans;
        unordered_set<string> st;
        for(auto word: words){
            if(word.size()==1||st.find(word.substr(0, word.size() - 1)) != st.end()){
                st.insert(word);
                if(word.size()>ans.size()||(word.size() == ans.size() && word < ans)){
                ans=word;
            }
            }
            
        }
        return ans;
    }
};