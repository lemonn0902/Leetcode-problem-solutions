// Last updated: 3/19/2026, 4:03:34 PM
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
15bool ans=true;
16    void inorder(TreeNode* root){
17        if(!root) return;
18        inorder(root->left);
19        if(prev!=NULL&&prev->val>=root->val){
20            ans=false;
21        }
22        prev=root;
23        inorder(root->right);
24    }
25    bool isValidBST(TreeNode* root) {
26        inorder(root);
27        return ans;
28    }
29};