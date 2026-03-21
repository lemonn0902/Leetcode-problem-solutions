// Last updated: 3/21/2026, 7:41:07 PM
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
14    TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
15        if(!root1) return root2;
16        if(!root2) return root1;
17        root1->val+=root2->val;
18        root1->left=mergeTrees(root1->left, root2->left);
19        root1->right=mergeTrees(root1->right, root2->right);
20        return root1;
21    }
22};