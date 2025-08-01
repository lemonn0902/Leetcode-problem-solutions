// Last updated: 8/1/2025, 5:39:14 PM
class Solution {
public:
    vector<int> asteroidCollision(vector<int>& a) {
        stack<int> st;
        vector<int> res;
        
        for(int i=0;i<a.size();i++){
            while(!st.empty()&&st.top()>0&&a[i]<0){
                int top=st.top();
                if(abs(top)==abs(a[i])){
                    st.pop();
                    a[i]=0;
                    break;
                }
                else if(abs(top)>abs(a[i])){
                    a[i]=0;
                    break;
                }
                else{
                    st.pop();
                    
                }
            }
            if(a[i]!=0) st.push(a[i]);
        }
        while(!st.empty()){
            res.push_back(st.top());
            st.pop();
        }
        reverse(res.begin(),res.end());
        return res;
    }
};