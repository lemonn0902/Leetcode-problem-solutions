// Last updated: 3/18/2026, 10:13:31 PM
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
14    void dfs(TreeNode* root, vector<string>& ans, string path){
15        if(!root) return;
16        
17        if(path=="") path += to_string(root->val);
18        else{
19            path+= "->"+to_string(root->val);
20        }
21        if(root->left==NULL&&root->right==NULL){
22            ans.push_back(path);
23            path="";
24            return;
25        }
26         dfs(root->left, ans, path);
27         dfs(root->right, ans, path);
28    }
29    vector<string> binaryTreePaths(TreeNode* root) {
30        vector<string> ans;
31        string path="";
32        dfs(root, ans, path);
33        return ans;
34    }
35};