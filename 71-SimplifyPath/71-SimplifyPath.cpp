// Last updated: 7/29/2025, 8:45:08 PM
class Solution {
public:
    string simplifyPath(string path) {
        
        stack<string> st;
        int n=path.size();
        for(int i=0;i<n;i++){
            while(i<n && path[i]=='/'){
                i++;
            }
            if(i==n) break;
            string dir="";
            while(i<n&& path[i]!='/'){
                dir=dir+path[i];
                i++;
            }
            if (dir == "." || dir == "") continue;
            else if(dir==".."){
                if(!st.empty()) st.pop();
            } 
            else
            st.push(dir);
        }
        vector<string> rev;
        while(!st.empty()){
            rev.push_back(st.top());
            st.pop();
        }
        reverse(rev.begin(),rev.end());
        string res="";
        for(auto a:rev){
            res += "/" + a;
        }
        return res == "" ? "/" : res;
    }
};