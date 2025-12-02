// Last updated: 12/2/2025, 10:03:14 PM
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
14    void dfs(TreeNode* node,vector<int>& preorder){
15        if(!node) return;
16        preorder.push_back(node->val);
17        dfs(node->left, preorder);
18        dfs(node->right, preorder);
19    }
20    vector<int> preorderTraversal(TreeNode* root) {
21        vector<int> preorder;
22        if(!root) return preorder;
23        dfs(root, preorder);
24        return preorder;
25    }
26};