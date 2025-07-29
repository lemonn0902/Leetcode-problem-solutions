// Last updated: 7/29/2025, 5:08:10 PM
class Solution {
public:
    bool isValid(string s) {
        if(s[0]==']'||s[0]=='}'||s[0]==')') return false;
        if(s.size()==1) return false;
        stack<char> st;
        unordered_map<char,char> mpp={
            {')','('},
            {'}','{'},
            {']','['}
        };
        for(char c: s){
            if(mpp.find(c)==mpp.end()){
                //it is an opening bracket
                st.push(c);
            }
            else if(!st.empty()&& mpp[c]==st.top()){
                st.pop();
            }
            else{
                return false;
            }
        }
        return st.empty();
    }
};