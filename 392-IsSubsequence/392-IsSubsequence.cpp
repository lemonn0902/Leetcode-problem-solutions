// Last updated: 10/29/2025, 9:06:35 PM
class Solution {
public:
    bool isSubsequence(string s, string t) {
       
        int idx=0;
        for(int i=0;i<t.size()&&idx<s.size();i++){
            if(s[idx]==t[i]){
                idx++;
                continue;
            }
        }
        return idx==s.size();
    }
};