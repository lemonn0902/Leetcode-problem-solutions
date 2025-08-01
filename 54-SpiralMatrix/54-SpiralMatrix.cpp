// Last updated: 8/1/2025, 4:15:04 PM
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> res;
        int m = matrix.size();
        int n = matrix[0].size();
        int top=0, left= 0, right=n-1, bottom= m-1;
        while(top <= bottom && left <= right){
            //move right
            for(int i=left;i<=right;i++){
                res.push_back(matrix[top][i]);
            }
            top++;
            //move down
            for(int i=top;i<=bottom;i++){
                res.push_back(matrix[i][right]);
            }
            right--;
            //move left
            if(top<=bottom){
                for(int i=right;i>=left;i--){
                res.push_back(matrix[bottom][i]);
            }
            bottom--;
            }
            
            //move up
            if (left <= right){
                for(int i=bottom;i>=top;i--){
                res.push_back(matrix[i][left]);
            }
            left++;
            }
            
        }
        return res;
        
    }
};