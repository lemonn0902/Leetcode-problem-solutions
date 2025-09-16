// Last updated: 9/16/2025, 1:11:37 PM
class Solution {
public:
    vector<int> replaceNonCoprimes(vector<int>& nums) {
        vector<int> res(nums.begin(), nums.end());
        bool poss=true;
        int i=0;
        while(i<res.size()-1){
            
            if(gcd(res[i], res[i+1])>1){
                int l=lcm(res[i], res[i+1]);
                res[i]=l;
                res.erase(res.begin()+i+1);
                i=max(0,i-1);
                
            }
            else{
                i++;
                
            }
        }
        return res;
    }
};