// Last updated: 3/19/2026, 4:46:46 PM
1/**
2 * Definition for a binary tree node.
3 * struct TreeNode {
4 *     int val;
5 *     TreeNode *left;
6 *     TreeNode *right;
7 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
8 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
9 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
10 * };
11 */
12class BSTIterator {
13    stack<TreeNode*> st;
14public:
15    BSTIterator(TreeNode* root) {
16        helper(root);
17    }
18    void helper(TreeNode* node){
19        while(node){
20            st.push(node);
21            node=node->left;
22        }
23    }
24    
25    int next() {
26        TreeNode* node=st.top();
27        st.pop();
28        helper(node->right);
29        return node->val;
30    }
31    
32    bool hasNext() {
33        return !st.empty();
34    }
35};
36
37/**
38 * Your BSTIterator object will be instantiated and called as such:
39 * BSTIterator* obj = new BSTIterator(root);
40 * int param_1 = obj->next();
41 * bool param_2 = obj->hasNext();
42 */