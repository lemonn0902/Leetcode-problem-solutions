// Last updated: 3/20/2026, 7:56:55 PM
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
14int maxi=0;
15    int depth(TreeNode* node){
16        if(!node) return 0;
17        int leftHeight=depth(node->left);
18        int rightHeight=depth(node->right);
19        maxi=max(maxi, leftHeight+rightHeight);
20        return 1+max(leftHeight, rightHeight);
21    }
22    int diameterOfBinaryTree(TreeNode* root) {
23        depth(root);
24        return maxi;
25        
26
27    }
28};