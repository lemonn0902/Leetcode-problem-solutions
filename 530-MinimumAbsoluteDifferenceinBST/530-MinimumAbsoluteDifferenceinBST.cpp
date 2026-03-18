// Last updated: 3/19/2026, 1:34:32 AM
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
14int mini=INT_MAX;
15TreeNode* prev=nullptr;
16    void process(int val){
17        if(prev!=NULL){
18            int d=abs(val-prev->val);
19        if(d<mini){
20            mini=d;
21        }
22        }
23        
24    }
25    void inorder(TreeNode* root){
26        if(!root) return;
27        inorder(root->left);
28        process(root->val);
29        prev=root;
30        inorder(root->right);
31    }
32    int getMinimumDifference(TreeNode* root) {
33        inorder(root);
34        return mini;
35    }
36};