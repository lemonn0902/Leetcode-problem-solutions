class Solution {
public:
    bool checkPowersOfThree(int n) {
        string ternary=getTernary(n);
        int len=ternary.length();
        for(int i=0;i<len;i++){
            char ch=ternary[i];
            if(ch=='2') return false;
        }
        return true;
    }
    string getTernary(int n){
        string ans="";
        while(n!=0){
            int r=n%3;
            ans+=('0'+r);
            n=n/3;
        }
        return ans;
    }
};