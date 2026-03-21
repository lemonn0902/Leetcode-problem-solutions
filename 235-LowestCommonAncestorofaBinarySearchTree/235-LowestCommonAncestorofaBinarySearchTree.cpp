// Last updated: 3/21/2026, 6:28:28 PM
1/**
2 * Definition for a binary tree node.
3 * struct TreeNode {
4 *     int val;
5 *     TreeNode *left;
6 *     TreeNode *right;
7 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
8 * };
9 */
10
11class Solution {
12public:
13    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
14        if(!root) return NULL;
15        int curr=root->val;
16        if(curr<p->val && curr<q->val){
17            return lowestCommonAncestor(root->right,p,q);
18        }
19        else if(curr>p->val && curr>q->val){
20            return lowestCommonAncestor(root->left,p,q);
21        }
22        return root;
23    }
24};