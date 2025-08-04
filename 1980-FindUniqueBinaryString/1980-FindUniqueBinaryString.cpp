// Last updated: 8/5/2025, 12:30:36 AM
class Solution {
public:
    string ans="";
    unordered_set<string> st;
    bool found = false;
    void solve(vector<string>& nums, int k, string curr){
        if(found) return;
        if(curr.size()==k){
            
            if(st.find(curr)==st.end()){
                found=true;
                ans=curr;
                
            }
            return;
        }
        
        solve(nums,k,curr+"1");
        
        solve(nums,k,curr+"0");
    }
    string findDifferentBinaryString(vector<string>& nums) {
        int k= nums.size();
        for(auto num:nums) st.insert(num);
        solve(nums, k,"");
        return ans;
    }
};