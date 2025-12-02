// Last updated: 12/2/2025, 11:12:37 PM
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
14    int height(TreeNode* node){
15        if(!node) return 0;
16        return 1+max(height(node->left), height(node->right));
17    }
18    bool isBalanced(TreeNode* root) {
19        if(!root) return true;
20        if(root->left==NULL&&root->right==NULL) return true;
21        int leftHeight= height(root->left);
22        int rightHeight= height(root->right);
23        if(abs(leftHeight-rightHeight)>1) return false;
24        return isBalanced(root->left) && isBalanced(root->right);
25    }
26};