// Last updated: 7/28/2025, 12:03:05 AM
class Solution {
public:
    int characterReplacement(string s, int k) {
        int l=0;
        int r=0;
        int n=s.size();
        int maxAns=0;
        int maxFreq=0;
        unordered_map<char,int> freq;
        while(r<n){
            freq[s[r]]++;
            maxFreq=max(maxFreq, freq[s[r]]);
            if((1+r-l)-maxFreq>k){
                freq[s[l]]--;
                l++;
            }
            maxAns=max(maxAns, 1+r-l);
            r++;
        }
        return maxAns;
    }
};