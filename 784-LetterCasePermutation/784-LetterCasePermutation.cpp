// Last updated: 8/4/2025, 2:15:19 PM
class Solution {
public:
    
    void backtrack(string s,vector<string>& res, int index){
        if(index==s.size()){
            res.push_back(s);
            return;
        }
        if (isalpha(s[index])){
            s[index]=tolower(s[index]);
            backtrack(s, res, index + 1);
            s[index]=toupper(s[index]);
            backtrack(s, res, index + 1);
        }
        else{
            backtrack(s, res, index + 1);
        }
    }
    vector<string> letterCasePermutation(string s) {
        vector<string> res;
        backtrack(s,res,0);
        return res;
    }
};