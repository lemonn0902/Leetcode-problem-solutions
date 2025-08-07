// Last updated: 8/7/2025, 1:25:26 PM
class Solution {
public:
    int maxCount=0;
    void backtrack(string s, int ind, unordered_set<string>& v){
        int n=s.size();
        //base case
        if(ind==n){
            maxCount=max(maxCount,(int) v.size());
            return;
        }
        for(int i=ind;i<n;i++){
            if(v.find(s.substr(ind,i-ind+1))==v.end()){
                v.insert(s.substr(ind,i-ind+1));
                backtrack(s,i+1,v);
                v.erase(s.substr(ind,i-ind+1));
            }
        }
    }
    int maxUniqueSplit(string s) {
        unordered_set<string> v;
        backtrack(s, 0,v );
        return maxCount;
    }
};