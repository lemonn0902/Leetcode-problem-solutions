// Last updated: 10/12/2025, 2:56:38 PM
class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> res;
        unordered_map<char,int> freq;
        unordered_map<char,int> mpp;
        for(char c:p){
            freq[c]++;
        }
        int win_size=p.size();
        int l=0;
        int r=0;
        int n=s.size();
        while(r<n){
            mpp[s[r]]++;
            if(1+r-l>win_size){
                mpp[s[l]]--;
                if(mpp[s[l]]==0) mpp.erase(s[l]);
                l++;
            }
            if(1+r-l==win_size&& freq==mpp){
                res.push_back(l);
            }
            r++;
        }
        return res;
    }
};