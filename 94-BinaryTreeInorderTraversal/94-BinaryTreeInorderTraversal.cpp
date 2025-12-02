// Last updated: 12/2/2025, 10:09:02 PM
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
15        vector<int> inorder;
16        stack<TreeNode*> st;
17        TreeNode* node=root;
18        while(true){
19            if(node!=nullptr){
20                st.push(node);
21                node=node->left;
22            }
23            else{
24                if(st.empty()) break;
25                node=st.top();
26                st.pop();
27                inorder.push_back(node->val);
28                node=node->right;
29            }
30        }
31        return inorder;
32    }
33};