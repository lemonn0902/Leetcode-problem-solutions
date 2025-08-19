// Last updated: 8/20/2025, 12:56:14 AM
class Solution {
public:
    int maxVowels(string s, int k) {
        int maxAns=0;
        int l=0;
        int r=0;
        int n=s.size();
        int count=0;
        while(r<n){
            
            if(s[r]=='a'||s[r]=='e'|s[r]=='i'|s[r]=='o'|s[r]=='u'){
                count++;
            }
            
            if(1+r-l>k){
                if(s[l]=='a'||s[l]=='e'|s[l]=='i'|s[l]=='o'|s[l]=='u'){
                count--;
            }
                l++;
            }
            if(1+r-l==k){
                maxAns=max(maxAns, count);
            }
            r++;
            
        }
        return maxAns;
    }
};