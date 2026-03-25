// Last updated: 3/25/2026, 10:24:42 PM
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
14    TreeNode* removeLeafNodes(TreeNode* root, int target) {
15        if(!root) return NULL;
16        root->left=removeLeafNodes(root->left,target);
17        root->right=removeLeafNodes(root->right,target);
18        if(!root->left&&!root->right&&root->val==target)
19        root=NULL;
20        return root;
21    }
22};