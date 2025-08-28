// Last updated: 8/28/2025, 11:53:09 PM
class Solution {
public:
    string largestOddNumber(string num) {
        int idx=0, c=0;
        for(int i=0;i<num.size();i++){
            if((num[i]-'0')%2!=0){
                idx=i;
                c++;
            }
        }
        if(c>0) return num.substr(0,idx+1);
        else return "";
    }
};