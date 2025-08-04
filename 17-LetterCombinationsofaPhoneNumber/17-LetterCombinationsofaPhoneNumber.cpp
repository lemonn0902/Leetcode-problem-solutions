// Last updated: 8/4/2025, 4:39:44 PM
class Solution {
public:
    unordered_map<char, string> map={
        {'2',"abc"},
        {'3',"def"},
        {'4',"ghi"},
        {'5',"jkl"},
        {'6',"mno"},
        {'7',"pqrs"},
        {'8',"tuv"},
        {'9',"wxyz"},
        
    };
    void backtrack(string digits, vector<string>& res,int index, string curr){
        int n=digits.size();
        if(curr.size()==n){
            res.push_back(curr);
            return;
        }
        char dig=digits[index]; 
        const string& choices = map[dig];
        for(char ch:choices){
            
            
            
                curr.push_back(ch);
                backtrack(digits,res,index+1,curr);
                curr.pop_back();
            }
        

    }
    vector<string> letterCombinations(string digits) {
        if(digits=="") return {};
        vector<string> res;
        backtrack(digits, res,0,"");
        return res;
    }
};