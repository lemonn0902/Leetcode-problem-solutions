// Last updated: 8/7/2025, 12:25:34 PM
class Solution {
public:
    bool valid(string str){
        if(str.empty() || str.size() > 3) return false;
    if(str[0]=='0' && str.size() > 1) return false;
    if(stoi(str) > 255) return false;
    return true;
    }
    void backtrack(string s, vector<string>& res,string curr, int i, int dots){
        //base case
        if(dots==3){
            if(valid(s.substr(i))){
                res.push_back(curr+s.substr(i));
            }
            return;
        }
        int n=s.size();
        for(int j=i;j<min(i+3,n);j++){
            string seg= s.substr(i,j-i+1);
            if(valid(seg)){
                string temp=curr+seg+".";
                backtrack(s,res,temp,j+1,dots+1);
                
            }
        }

    }
    vector<string> restoreIpAddresses(string s) {
        vector<string> res;
        string curr="";
        backtrack(s,res,curr,0,0);
        return res;
    }
};