// Last updated: 3/21/2026, 8:02:44 PM
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
14    int minDepth(TreeNode* root) {
15        if(!root) return 0;
16        int l=minDepth(root->left);
17        int r=minDepth(root->right);
18        if(l==0 || r==0) return 1+max(l,r);
19        return 1+min(l,r);
20    }
21};