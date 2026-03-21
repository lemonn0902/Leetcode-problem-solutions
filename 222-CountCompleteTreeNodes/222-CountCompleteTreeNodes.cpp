// Last updated: 3/21/2026, 6:34:33 PM
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
14    void dfs(TreeNode* root, int& ans){
15        if(!root) return;
16        ans++;
17        dfs(root->left, ans);
18        dfs(root->right, ans);
19    }
20    int countNodes(TreeNode* root) {
21        if(!root) return 0;
22        int ans=0;
23        dfs(root, ans);
24        return ans;
25    }
26};