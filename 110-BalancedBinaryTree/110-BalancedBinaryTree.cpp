// Last updated: 3/19/2026, 5:18:18 PM
1/**
2 * Definition for a binary tree node.
3 * struct TreeNode {
4 *     int val;
5 *     TreeNode *left;
6 *     TreeNode *right;
7 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
8 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
9 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
10 * right(right) {}
11 * };
12 */
13class Solution {
14public:
15    int findHeight(TreeNode* node) {
16        if (!node)
17            return 0;
18        return 1 + max(findHeight(node->right), findHeight(node->left));
19    }
20    bool isBalanced(TreeNode* root) {
21        if (!root)
22            return true;
23        int l = findHeight(root->left);
24        int r = findHeight(root->right);
25        if (abs(l - r) > 1)
26            return false;
27        return isBalanced(root->right) && isBalanced(root->left);
28    }
29};