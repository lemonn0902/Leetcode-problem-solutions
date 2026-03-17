// Last updated: 3/17/2026, 7:58:16 PM
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
12class Solution {
13public:
14    vector<int> preorderTraversal(TreeNode* root) {
15        vector<int> ans;
16        stack<TreeNode*> st;
17        if(!root) return ans;
18        st.push(root);
19        while(!st.empty()){
20            TreeNode* node= st.top();
21            st.pop();
22            ans.push_back(node->val);
23            if(node->right!=NULL) st.push(node->right);
24            if(node->left!=NULL) st.push(node->left);
25        }
26        return ans;
27    }
28};