// Last updated: 9/13/2025, 11:53:33 AM
class Solution {
public:
    int maxFreqSum(string s) {
        int maxCons=0;
        int maxVow=0;
        unordered_map<char,int> vow;
        unordered_map<char,int> cons;

        for(char c:s){
            if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'){
                vow[c]++;
            }
            else{
                cons[c]++;
            }
        }
        for(auto it:vow){
            if(it.second>maxVow){
                maxVow=it.second;
            }
        }
        for(auto it: cons){
            if(it.second>maxCons){
                maxCons=it.second;
            }
        }
        return maxCons+maxVow;
    }
};