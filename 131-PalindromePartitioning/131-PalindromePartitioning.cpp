// Last updated: 8/4/2025, 12:47:26 AM
class Solution {
public:
    bool isPal(string s,int l,int r){
        while (l < r) {
            if (s[l++] != s[r--]) return false;
        }
        return true;
    }
    void backtrack(string s, vector<string> curr, vector<vector<string>>& res,int start){
        int n=s.size();
        if(start==s.size()){
            res.push_back(curr);
            return;
        }
        for(int i=start;i<n;i++){
            if(isPal(s,start,i)){
                curr.push_back(s.substr(start,i-start+1));
                backtrack(s,curr,res,i+1);
                curr.pop_back();
            }
        }
        

    }
    vector<vector<string>> partition(string s) {
        int n=s.size();
        vector<string> curr;
        vector<vector<string>> res;
        backtrack(s,curr,res,0);
        return res;
    }
};