// Last updated: 8/25/2025, 12:18:26 PM
class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        unordered_map<char,int> needed; int res=0;
        for(int i=0;i<allowed.size();i++){
            needed[allowed[i]]++;
        }
        for(auto word: words){
            bool iscons=true;
            for(char ch:word){
                if(needed.find(ch)==needed.end()){
                    iscons=false;
                    break;
                }
            }
            if(iscons) res++;
        }
        return res;
    }
};