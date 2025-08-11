// Last updated: 8/11/2025, 11:07:03 PM
#include <algorithm> // for std::transform
#include <cctype>
class Solution {
public:
    bool isPalindrome(string s) {
        string org="";
        string rev="";
        for(auto it:s){
            if((it>='a'&&it<='z')||(it>='A'&&it<='Z')||(it>='0'&&it<='9')){
                org+=it;
            }
        }
        for(int i=0;i<org.size();i++){
            char curr=org[i];
            if(curr>='A'&& curr<='Z'){
                org[i]=curr-'A'+'a';
            }
        }
        for(int i=org.size()-1;i>=0;i--){
            rev+=org[i];
        }
        if(rev!=org)
        return false;
        return true;
    }
};