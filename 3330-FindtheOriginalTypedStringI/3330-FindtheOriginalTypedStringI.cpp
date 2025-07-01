// Last updated: 7/1/2025, 3:42:48 PM
class Solution {
public:
    int possibleStringCount(string word) {
        int len= word.size();
        int ans=len;
        for(int i=1;i<len;i++){
            if(word[i]!=word[i-1])
            ans--;
        }
        return ans;
    }
};