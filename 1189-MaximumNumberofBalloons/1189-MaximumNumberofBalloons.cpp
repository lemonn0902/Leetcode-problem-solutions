// Last updated: 7/30/2025, 4:24:56 PM
class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<char,int> freq;
        for(int i=0;i<text.size();i++){
            freq[text[i]]++;
        }
        int b=freq['b'];
        int a=freq['a'];
        int l=freq['l']/2;
        int o=freq['o']/2;
        int n=freq['n'];
        return min({b,a,l,o,n});
        
    }
};