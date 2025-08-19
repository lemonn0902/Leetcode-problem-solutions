// Last updated: 8/19/2025, 11:34:56 PM
class Solution {
public:
    bool check(vector<int>& nums, int s, int e){
        vector<int> res;
        for(int i=s;i<=e;i++){
            res.push_back(nums[i]);
        }
        sort(res.begin(), res.end());
        int ans=0; int curr=0;
        int diff = res[1] - res[0];
    for(int i = 2; i < res.size(); i++) {
        if(res[i] - res[i-1] != diff) return false;
    }
    return true;

    }
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        int n=nums.size();
        vector<bool> ans;
        int m=l.size();
        for(int i=0;i<m;i++){
            int startIndex= l[i];
            int endIndex=r[i];
            ans.push_back(check(nums, startIndex, endIndex));
        }
        return ans;
    }
};