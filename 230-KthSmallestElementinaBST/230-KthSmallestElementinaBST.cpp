// Last updated: 3/19/2026, 3:50:16 PM
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
14int ans=0;
15
16void inorder(TreeNode* root, int k, int& count){
17    if(!root) return;
18    inorder(root->left,k,count);
19    int curr=root->val;
20    count++;
21    if(count==k) {
22        ans=curr;
23        return;
24    }
25    inorder(root->right,k,count);
26
27
28}
29    int kthSmallest(TreeNode* root, int k) {
30        int count=0;
31        inorder(root,k,count);
32        return ans;
33    }
34};