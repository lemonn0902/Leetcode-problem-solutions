// Last updated: 9/13/2025, 12:56:42 PM
class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        unordered_map<int, vector<int>> mpp; //person n, trusts ppl
        vector<int> store;
        for(int i=0;i<trust.size();i++){
            int person=trust[i][0];
            int trustedPerson= trust[i][1];
            mpp[person].push_back(trustedPerson);
        }
        if (trust.empty()) return n == 1 ? 1 : -1;
        unordered_map<int,int> freq;
        for(auto it:mpp){
            for(int t:it.second)
            freq[t]++;
        }
        for(auto it: freq){
            if(it.second==n-1){
                int cand=it.first;
                if(mpp.find(cand)==mpp.end())
                return cand;
            }
        }
        return -1;
    }
};