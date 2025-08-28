// Last updated: 8/28/2025, 3:25:24 PM
class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n=cardPoints.size();
        int tot=0;
        int leftSum=0;
        int rightSum=0;
        int maxSum=0;
        for(int i=0;i<n;i++){
            tot+=cardPoints[i];
        }
        if(n==k) return tot;
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