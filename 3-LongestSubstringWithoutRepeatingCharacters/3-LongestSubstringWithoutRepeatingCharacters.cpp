// Last updated: 7/27/2025, 11:44:26 PM
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n= s.size();

        int l=0;
        int r=0;
        int maxAns=0;
        
        unordered_map<char,int> freq;
        while(r<n){
            
            freq[s[r]]++;
            while(freq[s[r]]>1){
                freq[s[l]]--;
                //if(freq[s[r]]==0) freq.erase(s[r]);
                l++;
            }
            maxAns=max(maxAns, 1+r-l);
            r++;
        }
        return maxAns;
    }
};