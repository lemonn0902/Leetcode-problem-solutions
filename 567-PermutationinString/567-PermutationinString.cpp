// Last updated: 7/28/2025, 1:24:00 PM
class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int windowSize= s1.size();
        int n=s2.size();
        if(windowSize>n) return false;
        int l=0;
        int r= 0;
        
        
        unordered_map<char,int> freq;
        unordered_map<char,int> first;
        for(int i=0;i<windowSize;i++){
            first[s1[i]]++;
        }
        while(r<n){
            
            freq[s2[r]]++;
            while((1+r-l)>windowSize){
                freq[s2[l]]--;
                if(freq[s2[l]]==0)
                freq.erase(s2[l]);
                l++;
            }
            if((1+r-l==windowSize)&&first==freq) return true;
            r++;
        }
        return false;
    }
};