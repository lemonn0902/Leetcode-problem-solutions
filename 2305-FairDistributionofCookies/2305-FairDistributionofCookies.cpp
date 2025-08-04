// Last updated: 8/5/2025, 12:01:03 AM
class Solution {
public:
    int ans=INT_MAX;
    void solve(int start,vector<int>& cookies,vector<int>& v, int k ){
        if(start==cookies.size()){
            int maxA=INT_MIN;
            for(int i=0;i<v.size();i++){
                maxA=max(maxA,v[i]);
            }
            ans=min(ans,maxA);
            return;
        }
        for(int i=0;i<k;i++){
            v[i]+=cookies[start];
            solve(start+1, cookies, v, k);
            v[i]-=cookies[start];
        }
    }
    int distributeCookies(vector<int>& cookies, int k) {
        vector<int> v(k,0);
        solve(0,cookies,v,k);
        return ans;
    }
};