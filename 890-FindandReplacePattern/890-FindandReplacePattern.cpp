// Last updated: 9/1/2025, 1:12:46 AM
class Solution {
public:
    bool check(string s,string t){
        unordered_map<char,int> p;
        unordered_map<char,int> q;
        for(int i=0;i<s.size();i++){
            if(p.find(s[i])==p.end()){
                p[s[i]]=i;
            }
            if(q.find(t[i])==q.end()){
                q[t[i]]=i;
            }
            if(p[s[i]]!=q[t[i]]) return false;
        }
        return true;
    }
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        vector<string> res;
        for(auto word:words){
            bool a=check(word,pattern);
            if(a==true) res.push_back(word);
        }
        return res;
        
    }
};