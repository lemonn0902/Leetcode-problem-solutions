// Last updated: 8/4/2025, 5:39:06 PM
class Solution {
public:
    void solve(int index,int n,vector<bool>& seen,int& count){
        if(index>n){
            count++;
            return;
        }
        for(int i=1;i<=n;i++){
            if(seen[i]) continue;
            if(i%index==0||index%i==0){
                seen[i]= true;
                solve(index+1,n,seen,count);
                seen[i]=false;
            }
            
        }
    }
    int countArrangement(int n) {
        vector<int> perm;
        int count=0;
        vector<bool> seen(n+1,false);
        solve(1,n,seen,count);
        return count;
    }
};