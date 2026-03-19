// Last updated: 3/19/2026, 11:50:56 PM
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
14    vector<int> rightSideView(TreeNode* root) {
15        vector<int> ans;
16        queue<TreeNode*> q;
17        q.push(root);
18        if(!root) return ans;
19        while(!q.empty()){
20            int size=q.size();
21            for(int i=0;i<size;i++){
22                TreeNode* node=q.front();
23                
24                q.pop();
25                if(i==size-1) {
26                    if(node) ans.push_back(node->val);
27                }
28                if(node->left) q.push(node->left);
29                if(node->right) q.push(node->right);
30            }
31        }
32        return ans;
33    }
34};