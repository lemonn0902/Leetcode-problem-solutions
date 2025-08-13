// Last updated: 8/13/2025, 12:29:45 PM
class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> st;
        int n=s.size();
        for(int i=0;i<n;i++){
            if(st.empty()) st.push(s[i]);
            else {
                if(s[i]==st.top()) st.pop();
                else st.push(s[i]);
            }
        }
        string ans="";
        while(!st.empty()){
            ans=st.top()+ans;
            st.pop();
        }
        return ans;
    }
};