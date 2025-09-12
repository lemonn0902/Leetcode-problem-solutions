// Last updated: 9/12/2025, 1:41:49 PM
class Solution {
public:
    bool doesAliceWin(string s) {
        bool win=false;
        int vowNum=0;
        for(char c:s){
            if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'){
                vowNum++;
            }
        }
        if(vowNum==0){
            return win;
        }
        else{
            return !win;
        }

    }
};