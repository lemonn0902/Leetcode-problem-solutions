// Last updated: 8/14/2025, 6:50:47 PM
#include <string>
class Solution {
public:
    string largestGoodInteger(string num) {
        int n=num.size();
        string ans="";
        for(int i=0;i<n-2;i++){
            if(num[i+1]==num[i]&&num[i]==num[i+2]){
                if(ans=="") ans=string(3,num[i]);
                else{
                    int curr = num[i] - '0';
                    int prev = ans[0] - '0';
                    if(curr>prev){
                        ans=string(3,num[i]);
                    }
                }
                

            }
        }
        return ans;
    }
};