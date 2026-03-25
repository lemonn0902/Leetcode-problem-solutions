// Last updated: 3/25/2026, 10:27:04 PM
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
14    TreeNode* helper(TreeNode* root,int target){
15        if(!root) return NULL;
16        root->left=helper(root->left, target);
17        root->right=helper(root->right, target);
18        if(root->left==NULL && root->right==NULL){
19            if(root->val==target){
20                return NULL;
21            }
22            
23        }
24        return root;
25    }
26    TreeNode* removeLeafNodes(TreeNode* root, int target) {
27        return helper(root, target);
28        
29    }
30};