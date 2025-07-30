// Last updated: 7/30/2025, 1:30:12 PM
class Solution {
public:
    string removeDuplicates(string s) {
        if(s=="") return "";
        if(s.size()==1) return s;
        stack<char> st;
        int n= s.size();
        for(int i=0;i<n;i++){
            if(!st.empty()&& st.top()==s[i]){
                st.pop();
                
                
            }
            else st.push(s[i]);
        }
        string res="";
        while(!st.empty()){
            res=st.top()+res;
            st.pop();
        }
        return res;
    }
};