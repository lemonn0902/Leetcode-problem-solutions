// Last updated: 9/2/2025, 10:53:59 PM
class Solution {
public:
    int beautySum(string s) {
        int ans=0;
        unordered_map<char,int> mpp;
        for(int i=0;i<s.size();i++){
            mpp.clear();
            for(int j=i;j<s.size();j++){
                mpp[s[j]]++;
                int mini=INT_MAX;
                int maxi=INT_MIN;
                for(auto it:mpp){
                    mini=min(mini, it.second);
                    maxi=max(maxi, it.second);
                }
                int b=maxi-mini;
                ans=ans+b;
            }

        }
        return ans;
    }
};