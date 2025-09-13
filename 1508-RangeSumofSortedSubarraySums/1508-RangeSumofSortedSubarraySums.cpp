// Last updated: 9/13/2025, 1:35:58 PM
class Solution {
public:
    const int MOD = 1e9 + 7;
    int rangeSum(vector<int>& nums, int n, int left, int right) {
        vector<int> sub;
        for(int i=0;i<n;i++){
            int sum=0;
            for(int j=i;j<n;j++){
                sum=sum+nums[j];
                sub.push_back(sum);
            }
            
        }
        sort(sub.begin(), sub.end());
        long long res=0;
        for(int i=left-1;i<=right-1;i++){
            res=(res+sub[i])%MOD;
        }
        return res;
    }
};