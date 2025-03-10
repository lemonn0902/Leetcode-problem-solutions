class Solution {
public:
    bool isPalindrome(string word){
        string rev="";
        for(int i=word.size()-1;i>=0;i--){
            rev=rev+word[i];
        }
        if(rev==word)
        return true;
        return false;
    }
    void backtrack(string& s, vector<vector<string>>& res, vector<string>& current, string part, int start){
        //base case:
        if(start==s.size()){
            if(part.empty()){
                res.push_back(current);
            }
            
            
            return;
        }
        part += s[start];
        if(isPalindrome(part)){
            current.push_back(part);
            backtrack(s,res, current, "", start+1);
            current.pop_back();
        } 
        backtrack(s,res,current,part, start+1);

    }
    vector<vector<string>> partition(string s) {
        vector<vector<string>> res;
        vector<string> current;
        backtrack(s, res, current, "", 0);

        return res;
    }
};