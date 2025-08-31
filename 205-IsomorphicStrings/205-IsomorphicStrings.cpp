// Last updated: 9/1/2025, 12:37:29 AM
class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char> mpp;
        unordered_set<char> used;
        int m=s.size();
        int n=t.size();
        if(m!=n) return false;
        for(int i=0;i<m;i++){
            if(mpp.find(s[i])==mpp.end()){
                if (used.count(t[i])) return false;
                mpp[s[i]]=t[i];
                used.insert(t[i]);
            }
            else{
                char should=t[i];
                char is=mpp[s[i]];
                if(should!=is) return false;

            }
        }
        return true;
    }
};