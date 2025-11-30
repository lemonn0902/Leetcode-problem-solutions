// Last updated: 11/30/2025, 3:33:32 PM
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
14    int height(TreeNode* root, int& diameter){
15        if(!root) return 0;
16        int lh=height(root->left, diameter);
17        int rh=height(root->right, diameter);
18        diameter=max(diameter, lh+rh);
19        return 1+max(lh,rh);
20    }
21    int diameterOfBinaryTree(TreeNode* root) {
22        if(!root) return 0;
23        int diameter=0;
24        height(root, diameter);
25        return diameter;
26    }
27
28};