// Last updated: 9/13/2025, 4:49:55 PM
class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        sort(tokens.begin(), tokens.end());
        int n=tokens.size();
        int l=0;
        int r=n-1;
        int score=0; int maxScore=0;
        while(l<=r){
            //buy tokens with smallest value so that not a lot of power is lost, we gain 1 score nonethless ie play face up
            if(power>=tokens[l]){
                power=power-tokens[l];
            score++;
            l++;
            maxScore = max(maxScore, score);
            }
            
            //sell tokens with most value to get most power, we will lose onlt 1 score nonethless ie play face down
            else if(score>=1){
                power=power+tokens[r];
            score--;
            r--;
            }
            else{
                break;
            }
            
        }
        return maxScore;
    }
};