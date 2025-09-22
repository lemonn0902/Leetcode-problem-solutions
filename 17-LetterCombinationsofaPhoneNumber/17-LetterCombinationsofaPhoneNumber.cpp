// Last updated: 9/22/2025, 5:17:45 PM
class Solution {
public:
    unordered_map<char,string> mpp={
        {'2', "abc"},
        {'3', "def"},
        {'4', "ghi"},
        {'5', "jkl"},
        {'6', "mno"},
        {'7', "pqrs"},
        {'8', "tuv"},
        {'9', "wxyz"},
        
    };
    void backtrack(string digits,vector<string>& res,string curr, int index, int n ){
        if(curr.size()==n){
            res.push_back(curr);
            return;
        }
        char dig=digits[index];
        string choices= mpp[dig];
        for(char ch:choices){
            curr.push_back(ch);
            backtrack(digits, res, curr, index+1, n);
            curr.pop_back();
        }

    }
    vector<string> letterCombinations(string digits) {
        if(digits=="") return {};
        vector<string> res;
        int n= digits.size();
        backtrack(digits, res, "",0,n);
        return res;
    }
};