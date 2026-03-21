// Last updated: 3/21/2026, 11:43:08 AM
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
14int maxi=INT_MIN;
15    int helper(TreeNode* root){
16        if(!root) return 0;
17        int leftSum=max(0,helper(root->left));
18        int rightSum=max(0,helper(root->right));
19        maxi=max(maxi, leftSum+rightSum+root->val);
20        return root->val+max(leftSum, rightSum);
21    }
22    int maxPathSum(TreeNode* root) {
23        helper(root);
24        return maxi;
25    }
26};