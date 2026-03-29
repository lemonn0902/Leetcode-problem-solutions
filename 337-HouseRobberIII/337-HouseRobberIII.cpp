// Last updated: 3/29/2026, 4:50:20 PM
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
14    int f(TreeNode* root, unordered_map<TreeNode*, int>& dp){
15        if(!root) return 0; //base case
16        if(dp.count(root)) return dp[root];
17        //rob
18        int rob=root->val;
19        if(root->left) rob+=f(root->left->left,dp)+f(root->left->right,dp);
20        if(root->right) rob+=f(root->right->left,dp)+f(root->right->right,dp);
21        //skip
22        int skip=f(root->left,dp)+f(root->right,dp);
23        return dp[root]=max(rob,skip);
24
25    }
26    int rob(TreeNode* root) {
27        
28        unordered_map<TreeNode*, int> dp;
29        return f(root,dp);
30    }
31};