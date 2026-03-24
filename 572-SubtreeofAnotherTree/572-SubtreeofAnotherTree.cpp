// Last updated: 3/24/2026, 6:37:11 PM
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
14    bool isSame(TreeNode* p, TreeNode* q){
15        if(!p&&!q) return true;
16        if(!p) return false;
17        if(!q) return false;
18        if(p->val!=q->val) return false;
19        return isSame(p->left,q->left) && isSame(p->right, q->right);
20    }
21    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
22        if(root==NULL) return false;
23        if(isSame(root, subRoot)) return true;
24        return isSubtree(root->left, subRoot)||isSubtree(root->right, subRoot);
25        
26        
27    }
28};