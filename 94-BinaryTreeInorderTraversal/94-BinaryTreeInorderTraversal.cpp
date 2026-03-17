// Last updated: 3/17/2026, 8:02:42 PM
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
14    vector<int> inorderTraversal(TreeNode* root) {
15        vector<int> ans;
16        if(!root) return ans;
17        stack<TreeNode*> st;
18        TreeNode* node=root;
19        while(true){
20            if(node!=NULL){
21                st.push(node);
22                node=node->left;
23            }
24            else{
25                if(st.empty()) break;
26                node=st.top();
27                st.pop();
28                ans.push_back(node->val);
29                node=node->right;
30
31            }
32        }
33        return ans;
34    }
35};