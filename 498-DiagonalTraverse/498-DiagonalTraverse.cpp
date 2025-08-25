// Last updated: 8/25/2025, 1:21:57 PM
class Solution {
public:
    bool possible(vector<vector<int>>& mat, int i, int j){
        int m=mat.size();
        int n= mat[0].size();
        if(i<0||j<0||i>=m||j>=n) return false;
        return true;
    }
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        int m=mat.size();
        int n= mat[0].size();
        vector<int> res;
        bool up=true;
        int i=0; int j=0;
        while(res.size() < m * n){ //stop only when all elements are visited
            res.push_back(mat[i][j]);
            if(up){ // go up right
                if(possible(mat,i-1,j+1)){
                    
                   i--, j++;
                    
                }
                else {
                    up=!up;
                    if (possible(mat, i, j + 1)) j++;
                    else i++;
                }
                
            }
            else{ //go down left
                if(possible(mat,i+1,j-1)){
                    i++, j--;
                }
                else{
                    up=!up;
                    if(possible(mat, i+1,j)) i++;
                    else j++;;
                }
            }
            

        }
        return res;
    }
};