// Last updated: 7/29/2025, 12:34:18 PM
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n= nums.size();
        int c=0;
        for(int i=0;i<=n;i++){
            if(find(nums.begin(), nums.end(), c)==nums.end()){
                return c;
            }
            c++;
        }
        return 0;
    }
};