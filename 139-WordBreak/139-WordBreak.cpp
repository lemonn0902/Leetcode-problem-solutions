// Last updated: 6/29/2025, 1:08:05 AM
class Solution {
public:
    unordered_map<int, bool> memo;
    bool backtrack(string s, vector<string>& wordDict, int start){
        
        if(start==s.size())
        {
            return true;
        }
        if(memo.count(start)) return memo[start];
        for(int i=0;i<wordDict.size();i++){
            string str= wordDict[i]; 
            if(s.substr(start, str.length())==str){
                if(backtrack(s, wordDict, start+str.length()))
                    return memo[start]=true;
            }

        }
        return memo[start]=false;
    }
    bool wordBreak(string s, vector<string>& wordDict) {
        return backtrack(s,wordDict,0);
    }
};