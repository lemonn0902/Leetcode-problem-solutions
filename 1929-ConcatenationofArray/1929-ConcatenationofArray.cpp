// Last updated: 11/22/2025, 2:41:54 PM
class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> ans(2*n,1);
        int j=n;
        int k=0;
        for(int i=0;i<2*n;i++){
            if(i%2!=0){
                ans[i]=nums[j];
                j++;
            }
            else{
                ans[i]=nums[k];
                k++;
            }
        }
        return ans;
    }
};