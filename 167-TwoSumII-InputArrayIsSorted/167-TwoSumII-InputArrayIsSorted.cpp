// Last updated: 7/26/2025, 12:43:59 PM
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n=numbers.size();
        int l=0;
        int r=n-1;
        while(l<r){
            int sum=numbers[l]+numbers[r];
            if(sum>target){
                r--;
            }
            else if(sum<target){
                l++;
            }
            else{
                return {l+1, r+1};
            }
        }
        return {};
    }
};