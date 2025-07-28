// Last updated: 7/28/2025, 2:20:11 PM
class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char,int> tFreq;
        unordered_map<char,int> freq;
        int m=s.size();
        int n=t.size();
        if(n>m) return "";
        int l=0;
        int r=0;
        int minLen=INT_MAX;int startIndex=0; int formed=0; 
        for(int i=0;i<n;i++){
            tFreq[t[i]]++;
        }
        int req=tFreq.size();
        while(r<m){
            freq[s[r]]++;
            if(tFreq.count(s[r])&&tFreq[s[r]]==freq[s[r]]){
                formed++;
            }
            //now we try to shrink from left 
            while(formed==req){
                if(1+r-l<minLen){
                    minLen=1+r-l;
                    startIndex=l;
                }
                freq[s[l]]--;
                if (tFreq.count(s[l]) && freq[s[l]] < tFreq[s[l]]) {
                    formed--;
                }
                l++;
            }
            r++;
        }
        return minLen==INT_MAX? "": s.substr(startIndex, minLen);
    }
};