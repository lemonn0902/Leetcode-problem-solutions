// Last updated: 8/28/2025, 11:48:29 PM
class Solution {
public:
    string largestOddNumber(string num) {
       
         int index=0; int c=0;
        for(int i=0;i<num.length();i++){
            if((num[i]-'0')%2!=0){
                
                index=i;
                c++;
            } 
        }
        if(c>0)
        return num.substr(0,index+1);
        else return "";
    }
};