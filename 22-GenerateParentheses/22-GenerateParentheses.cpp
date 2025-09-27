// Last updated: 9/28/2025, 1:02:27 AM
class Solution {
public:
    void backtrack(vector<string>& res, string curr, int open, int closed, int n){
        if(open==closed&&open==n){
            res.push_back(curr);
            return;
        }
        if(open<n) {
        backtrack(res, curr+"(", open+1,closed,n);}
        if(closed<open){
            
            backtrack(res,curr+")",open,closed+1,n);
        }

    }
    vector<string> generateParenthesis(int n) {
        vector<string> res;
        string curr="";
        int o=0, c=0;
        backtrack(res, curr, o,c,n);
        return res;
    }
};