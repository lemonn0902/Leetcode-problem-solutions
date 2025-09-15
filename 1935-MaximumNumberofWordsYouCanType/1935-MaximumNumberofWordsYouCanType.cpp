// Last updated: 9/15/2025, 12:56:47 PM
class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        int res=0;
        istringstream iss(text);
        string word;
        while(iss>>word){
            bool f=true;
            for(char c:brokenLetters){
                if(word.find(c)!=string::npos){
                    f=false;
                    break;
                }
            }
            if(f) res++;
        }
        return res;
    }
};