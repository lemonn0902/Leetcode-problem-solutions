// Last updated: 8/1/2025, 3:18:22 PM
class Solution {
public:
    
    int f(string& s, int i, vector<int>& dp){
        int n=s.size();
        //base case
        if(i==n) return 1;
        if(s[i]=='0') return 0;
        if(dp[i]!=-1) return dp[i];
        //take only one digit
        
        int ways=f(s, i+1,dp);
        //take 2 digits
        if(i+1<n){
            if(stoi(s.substr(i,2))<=26&&s[i]!='0')
            ways+=f(s,i+2,dp);
        }
        
        return dp[i]=ways;


    }
    int numDecodings(string s) {
       
        int n = s.size();
        vector<int> dp(n, -1);
        return f(s, 0,dp);
    }
};