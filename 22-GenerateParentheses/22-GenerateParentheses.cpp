// Last updated: 8/3/2025, 12:05:24 AM
class Solution {
public:
    void backtrack(int o,int c, string r, vector<string>& res){
        //base case
        if(o==0&&c==0){
            res.push_back(r);
            return;
        }
        //add '('
        if(o>0) backtrack(o-1,c,r+"(", res);
        //add ')'
        if(c-1>=o) backtrack(o,c-1,r+")", res );
    }
    vector<string> generateParenthesis(int n) {
        int open=n;
        int close=n;
        string r="";
        vector<string> res;
        backtrack(open, close, r,res);
        return res;
    }
};