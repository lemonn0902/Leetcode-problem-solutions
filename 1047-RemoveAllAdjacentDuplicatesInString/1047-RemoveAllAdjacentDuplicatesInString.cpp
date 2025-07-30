// Last updated: 7/30/2025, 1:33:05 PM
class Solution {
public:
    string removeDuplicates(string s) {
        if(s=="") return "";
        if(s.size()==1) return s;
        string res="";
        int n= s.size();
        for(int i=0;i<n;i++){
            if(!res.empty()&& res.back()==s[i]) res.pop_back();
            else res.push_back(s[i]);
        }
        return res;
            
    }
};