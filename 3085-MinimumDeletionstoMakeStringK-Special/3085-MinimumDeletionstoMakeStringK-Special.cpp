// Last updated: 6/21/2025, 7:55:35 PM
class Solution {
public:
    int minimumDeletions(string word, int k) {
        unordered_map<char, int> freq;
        for(int i=0;i<word.size();i++){
            char c=word[i];
            freq[c]++;
        }
        int maxfreq=0;vector<int>freq_vector;
        for(auto it: freq){
            maxfreq=max(maxfreq, it.second);
            freq_vector.push_back(it.second);
        }
        
        int mindel=INT_MAX;
        for(int target=1;target<=maxfreq;target++){
            int del=0;
            for(int f: freq_vector){
                if(f<target){
                    del+=f;
                }
                else if(f>target+k){
                    del+= (f - (target + k));
                }
            }
            mindel= min(mindel, del);
        }
        return mindel;
        
    }
};