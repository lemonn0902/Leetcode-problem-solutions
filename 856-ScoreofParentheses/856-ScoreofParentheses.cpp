// Last updated: 7/13/2026, 1:06:42 AM
1class Solution {
2public:
3    int scoreOfParentheses(string s) {
4    stack<int> st;
5    st.push(0);  // start with a "0" frame for the outermost level
6
7    for (char c : s) {
8        if (c == '(') {
9            st.push(0);  // open a new, empty frame for this level
10        } else {
11            int v = st.top();  // score accumulated inside this pair
12            st.pop();           // remove that frame — we're closing it
13            int score = (v == 0) ? 1 : 2 * v;
14            st.top() += score;  // fold this pair's score into its parent
15        }
16    }
17    return st.top();
18}
19};