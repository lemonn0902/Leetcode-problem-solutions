// Last updated: 9/14/2025, 10:50:04 PM
class Solution {
public:
    int longestPalindrome(string s) {
        if(s.length()==1) return 1;
        unordered_map<char,int> freq;
        for(char c:s){
            freq[c]++;
        }
        if(freq.size()==1){
            return  freq.begin()->second;
        }
        int res=0;
        for(auto& it:freq){
            if(it.second==1) continue;
            if(it.second%2==0){
                res=res+it.second;
                
            }
            else{
                
                res+=it.second-1;
                
            }
            it.second=it.second%2;
        }
        for(auto it:freq){
            if(it.second==1){
                res=res+1;
                break;
            }
        }
        return res;
    }
};