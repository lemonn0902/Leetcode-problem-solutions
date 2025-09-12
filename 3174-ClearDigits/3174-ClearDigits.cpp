// Last updated: 9/12/2025, 2:10:06 PM
class Solution {
public:
    string clearDigits(string s) {
        stack<char> st;
        for( char c: s){
            if(isdigit(c)){
                if(!st.empty()) st.pop();
            }
            else{
                st.push(c);
            }
        }
        string res;
        while(!st.empty()){
            res=st.top()+res;
            st.pop();

        }
        return res;
    }
};