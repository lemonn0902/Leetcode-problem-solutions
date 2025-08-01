// Last updated: 8/1/2025, 12:07:03 PM
class Solution {
public:
    bool isRobotBounded(string instructions) {
        int n=instructions.size();
        pair<int,int> pos={0,0};
        string dir="North";
        for(int i=0;i<n;i++){
            char move=instructions[i];
            if(move=='G'){
                if(dir=="North") pos={pos.first, pos.second+1};
                else if(dir=="West") pos={pos.first-1, pos.second};
                else if(dir=="East") pos={pos.first+1, pos.second};
                else pos={pos.first, pos.second-1};
            }
            else if(move=='L'){
                if(dir=="North") dir="West";
                else if(dir=="West") dir="South";
                else if(dir=="East") dir="North";
                else dir="East";
            }
            else {
                if(dir=="North") dir="East";
                else if(dir=="West") dir="North";
                else if(dir=="East") dir="South";
                else dir="West";
            }
        }
        if (pos == make_pair(0, 0) || dir != "North") return true;
        return false;
    }
};