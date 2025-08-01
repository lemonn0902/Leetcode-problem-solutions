// Last updated: 8/1/2025, 5:15:38 PM
class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
        int res=0;
        int map[60]={};
        for(int n:time){
            int t=n%60;
            int y=(60-t)%60;
            res+=map[y];
            map[t]++;

        }
        return res;
        

    }
};