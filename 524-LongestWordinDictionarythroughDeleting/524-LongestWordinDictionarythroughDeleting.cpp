// Last updated: 8/1/2025, 12:44:25 PM
class Solution {
public:
    string findLongestWord(string s, vector<string>& d) {
        sort(d.begin(),d.end(),[](const auto &a, const auto &b){
            if(a.length()!=b.length()) return a.length()>b.length();
            else return a<=b;
        });

        for(auto& x:d){
            int i=0, j=0;
            while(i<s.length()&&j<x.length()){
                if(s[i]==x[j]) j++;
                i++;
            }
            if(j==x.length()) return x;
        }
        return "";
    }
};