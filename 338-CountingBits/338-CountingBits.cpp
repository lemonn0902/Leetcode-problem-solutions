// Last updated: 8/13/2025, 7:16:14 PM
class Solution {
public:
    int countBin(int no){
        if(no==0) return 0;
        if(no==1) return 1;
        int res=0;
        string bin="";
        while(no!=0){
            int r=no%2;
            if(r==1) res++;
            bin=to_string(r)+bin;
            no=no/2;
        }
        return res;
    }
    vector<int> countBits(int n) {
        vector<int> ans;
        for(int i=0;i<=n;i++){
            int c=countBin(i);
            ans.push_back(c);
        }
        return ans;
    }
};