// Last updated: 3/19/2026, 1:18:25 AM
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
14    vector<int> ans;
15    int maxi=0;
16    int count=0;
17    TreeNode* prev=NULL;
18    void process(int val){
19        if(prev!=NULL && prev->val==val){
20            count++;
21        }
22        else count=1;
23
24        if(count>maxi){
25            maxi=count;
26            ans={val};
27        }
28        else if(count==maxi){
29            ans.push_back(val);
30        }
31    }
32    void inorder(TreeNode* root){
33        if(!root) return;
34        inorder(root->left);
35        process(root->val);
36        prev=root;
37        inorder(root->right);
38    }
39    vector<int> findMode(TreeNode* root) {
40        inorder(root);
41        return ans;
42    }
43};