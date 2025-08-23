// Last updated: 8/23/2025, 3:36:29 PM
class Solution {
public:
    int numMatchingSubseq(string s, vector<string>& words) {
        vector<vector<int>> pos(26);
        for(int i=0;i<s.size();i++){
            pos[s[i]-'a'].push_back(i);
        }
        int count=0;
        for(auto& word:words){
            int prev=-1;
            bool isSub=true;
            for(char c:word){
                auto& vec=pos[c-'a'];
                auto it=upper_bound(vec.begin(), vec.end(), prev);
                if(it==vec.end()){
                    isSub=false;
                    break;
                }
                prev=*it;
            }
            if(isSub) count++;
        }
        return count;
    }
};