// Last updated: 7/31/2025, 9:24:29 PM
class Solution {
public:
    bool judgeCircle(string moves) {
        int n=moves.size();
        int x1=0;
        int y1=0;
        for(int i=0;i<n;i++){
            char currMove=moves[i];
            if(currMove=='U') y1+=1;
            if(currMove=='D') y1+=-1;
            if(currMove=='L') x1+=-1;
            if(currMove=='R') x1+=1;

        }
        if(x1==0&&y1==0) return true;
        else return false;
    }
};