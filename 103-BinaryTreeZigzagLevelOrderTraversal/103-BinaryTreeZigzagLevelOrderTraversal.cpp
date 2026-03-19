// Last updated: 3/20/2026, 12:11:11 AM
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
14    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
15        queue<TreeNode*> q;
16        vector<vector<int>> ans;
17        if(!root) return ans;
18        q.push(root);
19        int odd=false;
20        while(!q.empty()){
21            int size=q.size();
22            vector<int> res;
23            odd=!odd;
24            for(int i=0;i<size;i++){
25                TreeNode* node=q.front();
26                q.pop();
27                if(node->left) q.push(node->left);
28                if(node->right) q.push(node->right);
29                res.push_back(node->val);
30            }
31            if(odd==true)
32            ans.push_back(res);
33            else {
34            reverse(res.begin(), res.end());
35            ans.push_back(res);
36            }
37
38        }
39        return ans;
40    }
41};