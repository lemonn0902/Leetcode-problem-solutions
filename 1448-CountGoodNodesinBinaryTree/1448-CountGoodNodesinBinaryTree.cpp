// Last updated: 3/25/2026, 10:56:17 PM
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
14    int dfs(TreeNode* root, int max_so_far){
15        if(!root) return 0;
16        int count=0;
17        if(root->val>=max_so_far)  count++;
18        max_so_far=max(max_so_far, root->val);
19        count+=dfs(root->left, max_so_far);
20        count+=dfs(root->right,max_so_far);
21        return count;
22    }
23    int goodNodes(TreeNode* root) {
24        int ans=dfs(root, root->val);
25        return ans;
26    }
27};