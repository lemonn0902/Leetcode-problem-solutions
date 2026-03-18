// Last updated: 3/19/2026, 12:48:39 AM
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
14TreeNode* prev=NULL;
15    void flatten(TreeNode* root) {
16        if(!root) return;
17        
18        //reverse pre - order (i.e RLN)
19        flatten(root->right);
20        flatten(root->left);
21        root->right=prev;
22        root->left=NULL;
23        prev=root;
24    }
25};