// Last updated: 9/15/2025, 1:01:57 PM
class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        int res=0;
       
        text=text+' ';
         int n=text.size();
        string temp="";
        for(int i=0;i<n;i++){
            if(text[i]==' '){
                bool f=true;
                for(int j=0;j<brokenLetters.size();j++){
                    if(temp.find(brokenLetters[j])!=string::npos){
                        f=false;
                        break;
                    }
                }
                if(f) res++;

                temp="";
            }
            else{
                temp+=text[i];
            }
            
            
        }
        return res;
    }
};