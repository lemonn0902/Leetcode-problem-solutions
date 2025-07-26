// Last updated: 7/27/2025, 12:56:09 AM
class Solution {
public:
    string process(string str){
        string res="";
        for(char chr: str){
            if(chr=='#'){
                if(!res.empty()) res.pop_back();
            }
            else{
                res.push_back(chr);
            }
        }
        return res;
    }
    bool backspaceCompare(string s, string t) {
        return process(s)==process(t);
    }
};