// Last updated: 8/25/2025, 3:43:57 PM
class Solution {
public:
    string decodeCiphertext(string encodedText, int rows) {
        int n=encodedText.size();
        if(n==0) return "";
        int cols=n/rows;
        string res;
        for(int start=0;start<cols;start++){
            int i=0, j=start;
            while(i<rows &&j<cols){
                res.push_back(encodedText[i*cols+j]);
                i++;
                j++;
            }
        }
        while(!res.empty()&&res.back()==' '){
            res.pop_back();
        }
        return res;
    }
};