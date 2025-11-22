// Last updated: 11/22/2025, 12:45:54 PM
class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans(2*n,1);
        for(int i=0;i<n;i++){
            ans[i]=nums[i];
        }
        int j=0;
        for(int i=n;i<2*n;i++){
            ans[i]=nums[j];
            j++;
        }
        return ans;
    }
};