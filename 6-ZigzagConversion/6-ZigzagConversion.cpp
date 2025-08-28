// Last updated: 8/28/2025, 12:15:49 PM
class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows == 1 || numRows >= s.size()) return s;
       vector<vector<char>> mat(numRows);
       int index=0; int d=1;
       for(char c:s){
        mat[index].push_back(c);
        if(index==0){
            d=1;
        }
        else if(index==numRows-1){
            d=-1;
        }
        index+=d;
       }
       string res="";
       for(auto& row: mat){
        for(char c:row){
            res+=c;
        }
       }
       return res;
    }
};