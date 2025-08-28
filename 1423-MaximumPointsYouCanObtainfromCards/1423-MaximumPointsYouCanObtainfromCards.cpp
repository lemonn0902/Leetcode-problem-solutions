// Last updated: 8/28/2025, 3:35:37 PM
class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int tot=0;
        int n=cardPoints.size();
        for(int n:cardPoints){
            tot+=n;
        }
        int left=n-k;
        int curr=0;
        for(int i=0;i<left;i++){
            curr=curr+cardPoints[i];
        }
        int minAns=curr;
        for(int i=left;i<n;i++){
            curr=curr+cardPoints[i]-cardPoints[i-left];
            minAns=min(curr,minAns);
        }
        return tot-minAns;

    }
};