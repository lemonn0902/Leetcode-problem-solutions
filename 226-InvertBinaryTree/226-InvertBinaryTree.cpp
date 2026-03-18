// Last updated: 3/18/2026, 10:47:47 PM
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
14    void invert(TreeNode* root){
15        if(!root) return;
16        swap(root->right, root->left);
17        invert(root->left);
18        invert(root->right);
19    }
20    TreeNode* invertTree(TreeNode* root) {
21        invert(root);
22        return root;
23
24    }
25};