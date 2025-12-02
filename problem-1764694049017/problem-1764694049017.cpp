// Last updated: 12/2/2025, 10:17:29 PM
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
14    vector<vector<int>> levelOrder(TreeNode* root) {
15        vector<vector<int>> ans;
16        queue<TreeNode*> q;
17        if(!root) return ans;
18        q.push(root);
19        while(!q.empty()){
20            int size=q.size();
21            vector<int> level;
22            for(int i=0;i<size;i++){
23                TreeNode* node=q.front();
24                q.pop();
25                if(node->left!=NULL) q.push(node->left);
26                if(node->right!=NULL) q.push(node->right);
27                level.push_back(node->val);
28            }
29            ans.push_back(level);
30        }
31        return ans;
32    }
33};