class Solution {
public:
    void backtrack(string& digits,vector<string>& res,int index, string& current, vector<string>& phoneMap ){
        //base case:
        if(index==digits.size()){
            res.push_back(current);
            return;
        }
        string letters=phoneMap[digits[index]-'0']; //'2','3'
        for(char letter : letters ){
            current.push_back(letter);
            backtrack(digits, res, index+1, current, phoneMap);
            current.pop_back();
        }


    }
    vector<string> letterCombinations(string digits) {
        if(digits.size()==0)
        return {};
        vector<string> res;
        string current;
        vector<string> phoneMap={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        backtrack(digits, res,0, current,phoneMap);
        return res;
    }
};