// Last updated: 3/17/2026, 9:50:07 PM
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
14    bool isMirror(TreeNode* nodeL, TreeNode* nodeR){
15        if(!nodeL && !nodeR) return true;
16        if((nodeL && !nodeR) || (nodeR && !nodeL)) return false;
17        if(nodeL->val!=nodeR->val) return false;
18        
19        return isMirror(nodeL->left, nodeR->right) && isMirror(nodeL->right, nodeR->left);
20        
21    }
22    bool isSymmetric(TreeNode* root) {
23        return isMirror(root->left, root->right);
24    }
25};