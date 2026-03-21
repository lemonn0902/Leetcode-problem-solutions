// Last updated: 3/21/2026, 1:19:39 PM
1/**
2 * Definition for a binary tree node.
3 * struct TreeNode {
4 *     int val;
5 *     TreeNode *left;
6 *     TreeNode *right;
7 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
8 * };
9 */
10class Solution {
11public:
12    TreeNode* dfs(TreeNode* root, TreeNode* p, TreeNode* q){
13        if(root==p ||root ==q||root==NULL) return root;
14        TreeNode* l=dfs(root->left,p,q);
15        TreeNode* r=dfs(root->right,p,q);
16        if(l && r) return root;
17        return l? l:r;
18    }
19    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
20        TreeNode* ans=dfs(root,p,q);
21        return ans;
22    }
23};