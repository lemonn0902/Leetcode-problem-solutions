// Last updated: 8/28/2025, 3:27:32 PM
class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n=cardPoints.size();
        
        int leftSum=0;
        int rightSum=0;
        int maxSum=0;
        
        for(int i=0;i<k;i++){
            leftSum+=cardPoints[i];
        }
        maxSum=leftSum;
        int idx=n-1;
        for(int i=k-1;i>=0;i--){
            leftSum=leftSum-cardPoints[i];
            rightSum=rightSum+cardPoints[idx];
            idx--;
            maxSum=max(maxSum, leftSum+rightSum);
        }
        return maxSum;
    }
};