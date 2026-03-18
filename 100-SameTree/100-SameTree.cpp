// Last updated: 3/18/2026, 10:35:59 PM
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
14    bool check(TreeNode* p, TreeNode* q){
15        if(!p&&!q) return true;
16        if(!p) return false;
17        if(!q) return false;
18        if(p->val!=q->val) return false;
19        return check(p->left, q->left) && check(p->right,q->right);
20    }
21    bool isSameTree(TreeNode* p, TreeNode* q) {
22        
23        return check(p,q);
24
25    }
26};