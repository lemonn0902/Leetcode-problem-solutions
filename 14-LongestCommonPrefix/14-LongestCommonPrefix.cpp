// Last updated: 8/25/2025, 12:33:14 AM
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string res="";
        string prefix=strs[0];
        int preLen=prefix.size();
        for(int i=1;i<strs.size();i++){
            string s=strs[i];
            while(preLen>s.size()||prefix!=s.substr(0,preLen)){
                preLen--;
                if(preLen==0) return "";
                prefix=prefix.substr(0,preLen);
            }
        }
        return prefix;
    }
};