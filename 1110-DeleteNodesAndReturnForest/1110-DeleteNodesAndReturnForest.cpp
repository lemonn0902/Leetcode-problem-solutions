// Last updated: 3/19/2026, 11:19:49 PM
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
14    TreeNode* countForests(TreeNode* root, vector<int>& to_delete,vector<TreeNode*>& ans){
15        if(!root) return NULL;
16        root->left=countForests(root->left, to_delete,ans);
17        root->right=countForests(root->right, to_delete,ans);
18        if(find(to_delete.begin(), to_delete.end(), root->val) != to_delete.end()){
19            if(root->left) ans.push_back(root->left);
20            if(root->right) ans.push_back(root->right);
21            return NULL;
22        }
23        return root;
24
25    }
26    vector<TreeNode*> delNodes(TreeNode* root, vector<int>& to_delete) {
27        vector<TreeNode*> ans;
28        TreeNode* res= countForests(root, to_delete, ans);
29        if(res){
30            ans.push_back(root);
31        }
32        return ans;
33    }
34};