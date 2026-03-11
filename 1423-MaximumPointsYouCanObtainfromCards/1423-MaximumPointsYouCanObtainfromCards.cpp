// Last updated: 3/11/2026, 6:34:12 PM
1class Solution {
2public:
3    int maxScore(vector<int>& cardPoints, int k) {
4        int leftSum=0;
5        for(int i=0;i<k;i++){
6            leftSum+=cardPoints[i];
7        }
8        int maxi=leftSum;
9        int rightSum=0, rightIndex=cardPoints.size()-1;
10        for(int i=k-1;i>=0;i--){
11            leftSum=leftSum-cardPoints[i];
12            rightSum=rightSum+cardPoints[rightIndex];
13            rightIndex--;
14            maxi=max(maxi, leftSum+rightSum);
15        }
16        return maxi;
17    }
18};