// Last updated: 10/15/2025, 10:56:24 PM
class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        int runningSum=0, currSum=0, ans=0;
        for(int i=0;i<arr.size();i++){
            runningSum+=arr[i];
            currSum+=i;
            if(currSum==runningSum) ans++;
        }
        return ans;
    }
};