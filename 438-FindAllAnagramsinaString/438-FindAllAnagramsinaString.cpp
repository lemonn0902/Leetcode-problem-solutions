// Last updated: 7/28/2025, 1:41:08 PM
class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> res;
        int windowSize=p.size();
        int n=s.size();
        if(windowSize>n) return {};
        int l=0;
        int r=0;
        unordered_map<char,int> first;
        for(int i=0;i<windowSize;i++) first[p[i]]++;
        unordered_map<char,int> second;
        while(r<n){
            second[s[r]]++;
            while((1+r-l)>windowSize){
                second[s[l]]--;
                if(second[s[l]]==0) second.erase(s[l]);
                l++;
            }
            if((1+r-l==windowSize)&&second==first) res.push_back(l);
            r++;
        }
        return res;
    }
};